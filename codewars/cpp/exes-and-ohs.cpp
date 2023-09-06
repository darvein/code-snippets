// https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp

#include <iostream>
#define _ std::ios::sync_with_stdio(false); std::cin.tie(0);

bool XO(const std::string& str)
{
  int x = 0;
  int o = 0;

  for(const char& c : str){
    if (c == 'X' or c == 'x') x++;
    if (c == 'O' or c == 'o') o++;
  }

  return x == o;
}

int main() { _
  std::cout << XO("ooxXm") << '\n';  
  return 0;
}
