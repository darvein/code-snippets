// https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp

#include <iostream>
#define _ std::ios::sync_with_stdio(false); std::cin.tie(0);

int solution(int number) 
{
  int sum = 0;

  for(int i = 0; i < number; i++){
    if(i % 3 == 0 && i % 5 == 0) {
      sum += i;
      continue;
    }

    if(i % 3 == 0) sum += i;
    if(i % 5 == 0) sum += i;
  }

  return sum;
}

int main() { _
  std::cout << solution(10) << '\n';
  return 0;
}
