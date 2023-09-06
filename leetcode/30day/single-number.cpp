#include <vector>
#include <iostream>

// xor-ing same numbers returns 0
// xor-ing a number against 0 returns the same

int singleNumber(std::vector<int>& nums) {
  int single = 0;
  for (size_t i = 0; i < nums.size(); ++i) {
    single = single ^ nums[i];
  }
  return single;
}

int main()
{
  std::vector<int> in = {4,1,2,1,2};
  std::cout << singleNumber(in) << std::endl;
  return 0;
}
