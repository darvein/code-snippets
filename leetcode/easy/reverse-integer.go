package main

import "fmt"

func reverse(x int32)int32 {
    var rev int32

    for ; x!= 0; {
        digit := x % 10
        x = x / 10

        if rev > 0x7fffffff/10 || (rev == 0x7fffffff/10 && digit > 7){
            return 0;
        }
        if rev < -0x80000000/10 || (rev == -0x80000000/10 && digit < -8){
            return 0;
        }

        rev = rev * 10 + digit
    }

    return rev
}

func main() {
    fmt.Println(reverse(-147483648))
}
