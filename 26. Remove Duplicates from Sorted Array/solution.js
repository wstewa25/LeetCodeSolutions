/**
 * @param {number[]} nums
 * @return {number}
 */
 var removeDuplicates = function(nums) {
    for (let i = 0; i < nums.length-1; i++) {
        if (nums[i] == nums[i+1]) {
            nums = removeNums(nums, i);
        }
    }
    return nums.length;
};

var removeNums = function(nums, i) {
    while (nums[i] == nums[i+1]) {
        nums.splice(i, 1);
    }
    return  nums;
}