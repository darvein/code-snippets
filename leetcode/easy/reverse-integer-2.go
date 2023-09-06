package main

import "fmt"

func reverse(x int)int {
    var rev int
    for ; x!= 0; {
        digit := x % 10
        x = x / 10
        rev = rev * 10 + digit
    }

    if rev > 0x7fffffff || rev < -0x80000000 {
        return 0
    }

    return rev
}

func main() {
    fmt.Println(reverse(-123))
}
