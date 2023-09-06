class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        if root == None: return 0

        l = Solution.maxDepth(None, root.left)
        r = Solution.maxDepth(None, root.right)

        if l > r: return l + 1
        else: return r + 1

# tree definition
b             = TreeNode(1)
b.left        = TreeNode(2)
b.right       = TreeNode(3)
b.left.left   = TreeNode(4)
b.left.right  = TreeNode(5)
b.right.left  = TreeNode(5)
b.right.right = TreeNode(6)

print(Solution.maxDepth(None, root=b))
