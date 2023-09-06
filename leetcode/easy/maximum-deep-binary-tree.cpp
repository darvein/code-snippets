// https://leetcode.com/problems/maximum-depth-of-binary-tree/

#include <iostream>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
  public:
    int maxDepth(TreeNode* root) {
      if(root == NULL) return 0;

      int l = maxDepth(root->left);
      int r = maxDepth(root->right);

      if(l > r) return l+1;
      else return r+1;
    }
};

int main()
{
  TreeNode* b = new TreeNode(1);
  b->left = new TreeNode(2);
  b->right = new TreeNode(3);
  b->left->left = new TreeNode(4);
  b->left->right = new TreeNode(5);
  b->right->left = new TreeNode(6);
  b->right->right = new TreeNode(7);


  Solution s;
  std::cout << s.maxDepth(b) << std::endl;
  return 0;
}
