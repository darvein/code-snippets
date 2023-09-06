package main

import "fmt"

func romanToInt(s string) int {
  romanNumber := 0

  romans := make(map[string]int)
  romans["I"] = 1
  romans["V"] = 5
  romans["X"] = 10
  romans["L"] = 50
  romans["C"] = 100
  romans["D"] = 500
  romans["M"] = 1000

  for i, _ := range s {
    if i < len(s)-1 &&
      romans[s[i:i+1]] < romans[s[i+1:i+2]] {
      romanNumber -= romans[s[i:i+1]]
    } else {
      romanNumber += romans[s[i:i+1]]
    }
  }

  return romanNumber
}

func main() {
  fmt.Println(romanToInt("MCMXCIV"))
}
