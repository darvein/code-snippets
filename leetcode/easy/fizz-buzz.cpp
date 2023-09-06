/**
 * Problem:
 * Very simple. Multiples of 3=Fizz, 5=Buzz if both=FizzBuzz
 *
 * https://leetcode.com/problems/fizz-buzz/
 */

#include <vector>
#include <iostream>
#define _ std::ios::sync_with_stdio(false); std::cin.tie(0);

class Solution {
  public:
    std::vector<std::string> fizzBuzz(int n) {
      std::vector<std::string> ret;

      std::string s;
      for (int i = 1; i <= n; ++i) {

        if (i % 5 == 0 &&
            i % 3 == 0) s = "FizzBuzz";
        else if (i % 5 == 0) s = "Buzz";
        else if (i % 3 == 0) s = "Fizz";
        else s = std::to_string(i);

        ret.push_back(s);
      }
      return ret; 
    }
};

int main() { _
  Solution s;
  for (auto i : s.fizzBuzz(15))
    std::cout << i << '\n';
  return 0;
}
