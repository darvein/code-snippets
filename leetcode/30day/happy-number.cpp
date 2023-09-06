#include <bits/stdc++.h>
#include <iostream>

bool isHappy(int n) {
  // Recursively iterate the sums of squares
  // If sum is 1, then is a happy number
  std::set<int> seen;
  while(n != 1){
    // Get the sum of squared digits
    int sum = 0;
    while(n){
      sum = sum + (n % 10) * (n % 10);
      n /= 10;
    }
    n = sum;

    // check if n appeared before
    // if so, then is not a happy number
    if (seen.find(n) != seen.end()) {
      return false;
    }
    seen.insert(n);
  }

  return true;
}

int main()
{
  std::cout << isHappy(19) << std::endl;
  return 0;
}
