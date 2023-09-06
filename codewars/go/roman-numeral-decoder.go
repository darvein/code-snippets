package main

import "fmt"

func Divisors(n int) int {
  counter := 0;

  for i := 1; i <= n; i++ {
    if n % i == 0 {
      counter = counter + 1;
    }
  }

  return counter;
}

func main(){
  fmt.Println(Divisors(4))
  fmt.Println(Divisors(5))
  fmt.Println(Divisors(12))
  fmt.Println(Divisors(30))
}
