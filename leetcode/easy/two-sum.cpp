#include <map>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
typedef long long LL;

std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::map<int,int> mhash;
    int diff = 0;

    for (size_t i = 0; i < nums.size(); ++i) {
        diff = target - nums[i];
        if (mhash.find(diff) != mhash.end()) {
            return {mhash[diff], (int)i};
        }
        mhash.insert({nums[i], i});
    }

    return {};
}

int main() {
    int target = 9;
    std::vector<int> nums = {2, 7, 11, 15 };
    std::vector<int> idxs = twoSum(nums, target);

    for (size_t i = 0; i < idxs.size(); ++i) {
        std::cout << idxs[i] << std::endl;
    }

    return 0;
}
