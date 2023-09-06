#include <iostream>
#include <vector>

class Solution {
  public:
    void moveZeroes(std::vector<int>& nums) {
      int nzi = 0; // non-zero index counter

      // Move all non-zeroes to the beginning
      for (size_t i = 0; i < nums.size(); ++i)
        if (nums[i]) nums[nzi++] = nums[i];

      // Fill up with zeroes the rest of the arr
      for (size_t i = nzi; i < nums.size(); ++i)
        nums[i] = 0;
    }
};

int main()
{
  std::vector<int> in = {1, 0};
  Solution sol;
  sol.moveZeroes(in);

  for(auto i : in) {
    std::cout << i << std::endl;
  }
  return 0;
}
