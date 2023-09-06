// https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/cpp

#include <cmath>
#include <iostream>

using namespace std;

bool narcissistic(int value){
  int sum = 0;
  int tmp = value;

  while(tmp >= 1){
    int d =  tmp % 10;
    sum += pow(d, to_string(value).length());
    tmp = tmp / 10;
  }

  return ((sum == value));
}

int main() {
  cout << narcissistic(7) << endl;
  cout << narcissistic(371) << endl;
  cout << narcissistic(122) << endl;
  cout << narcissistic(4887) << endl;
  return 0;
}
