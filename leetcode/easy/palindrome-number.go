package main

import "fmt"


func isPalindrome(x int) bool {
  rev := 0

  if x < 0 || (x % 10 == 0 && x != 0) {
    return false
  }

  for ; x > rev ;{
    digit := x % 10
    rev = rev * 10 + digit
    x = x / 10
  }

  if x == rev || (x == rev / 10) {
    return true
  }

  return false
}

func main() {
  fmt.Println(isPalindrome(-121))
}
