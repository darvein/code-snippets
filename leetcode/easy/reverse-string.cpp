#include <iostream>
#include <vector>
#include <string>

class Solution {
  public:
    void reverseString(std::vector<char>& s) {
      std::string::size_type i;
      for (i = 0; i < s.size()/2; i++) {
        char tmp = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = tmp;
      }
    }
};

int main()
{
  Solution s;
  std::vector<char> in = {'h', 'e', 'l', 'l', 'o', 'o'};
  s.reverseString(in);
  for(auto i : in){
    std::cout << i << std::endl;
  }
  return 0;
}
