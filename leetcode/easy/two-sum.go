package main

import "fmt"

func twoSum(nums []int, target int) []int {
    mhash := make(map[int]int)

    for i := 0; i < len(nums); i++ {
        diff := target - nums[i]

        if _, ok := mhash[diff]; ok {
            return []int{mhash[diff], i}
        }

        mhash[nums[i]] = i
    }
    return []int{}
}

func main() {
    a := twoSum([]int{2, 7, 11, 15}, 9)
    fmt.Println(a)
}

