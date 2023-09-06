// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3287/

#include <vector>
#include <iostream>

class Solution {
  public:
    int maxProfit(std::vector<int>& prices) {
      int best = 0;
      for(size_t i=1; i < prices.size(); i++)
        best = std::max(best,
            best + prices[i] - prices[i-1]);
      return best;
    }
};

int main()
{
  std::vector<int> in = {7, 1, 5, 3, 6, 4};
  //std::vector<int> in = {1, 2, 4};
  Solution sol;
  std::cout << sol.maxProfit(in) << std::endl;
  return 0;
}
