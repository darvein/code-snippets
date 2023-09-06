#!/usr/bin/env python

def twoSum(nums, target):
    mhash = {}
    for i in range(len(nums)):
        diff = target - nums[i]
        if diff in mhash.keys():
            return [mhash.get(diff), i]
        mhash[nums[i]] = i
    return []

nums = [2, 7 , 11, 15]
print(twoSum(nums, 9))
