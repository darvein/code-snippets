#include <vector>
#include <iostream>

// Kadane's algorithm

int maxSubArray(std::vector<int>& nums) {
  int globalSum = nums[0];
  int currSum = nums[0];

  for (size_t i = 1; i < nums.size(); ++i) {
    currSum = std::max(nums[i], currSum + nums[i]);
    globalSum = std::max(globalSum, currSum);
  }

  return globalSum;
}

int main()
{
  std::vector<int> in = {-2,1,-3,4,-1,2,1,-5,4};
  std::cout << maxSubArray(in) << std::endl;
  return 0;
}
