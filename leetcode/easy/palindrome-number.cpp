#include <iostream>

bool isPalindrome(int x) {
  int rev = 0;

  if (x < 0 || (x % 10 == 0 && x != 0)) {
    return false;
  }

  while(x > rev){
    int digit = x % 10;
    rev = rev * 10 + digit;
    x = x / 10;
  }

  if (x == rev || (x == rev / 10)) {
    return true;
  }

  return false;
}

int main()
{
  std::cout << isPalindrome(-121) << std::endl;
  return 0;
}
