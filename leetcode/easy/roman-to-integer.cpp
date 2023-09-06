// https://leetcode.com/problems/roman-to-integer/

#include <iostream>
#include <map>

class Solution {
  public:
    int romanToInt(std::string s) {
      int romanNumber = 0;
      std::map<char, int> romans = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
      };

      std::string::size_type i;
      for (i = 0; i < s.size(); ++i) {
        if (i < s.size()-1 &&
            romans[s[i]] < romans[s[i+1]])
          romanNumber -= romans[s[i]];
        else
          romanNumber += romans[s[i]];
      }

      return romanNumber;
    }
};

int main()
{
  Solution s;
  std::cout << s.romanToInt("III") << std::endl;
  std::cout << s.romanToInt("IV") << std::endl;
  std::cout << s.romanToInt("IX") << std::endl;
  std::cout << s.romanToInt("LVIII") << std::endl;
  std::cout << s.romanToInt("MCMXCIV") << std::endl;
  return 0;
}
