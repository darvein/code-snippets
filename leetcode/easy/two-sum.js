//https://leetcode.com/problems/two-sum/submissions/

var twoSum = function(nums, target) {
    let diff;
    let mhash = new Map();

    for (let i = 0; i < nums.length; i++) {
        diff = target - nums[i];
        if (mhash.has(diff)) {
            return [mhash.get(diff), i];
        }
        mhash.set(nums[i], i);
    }

    return [];
};

console.log(twoSum([2, 7, 11, 15], 9));
