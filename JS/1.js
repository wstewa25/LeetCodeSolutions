// /**
//  * @param {number[]} nums
//  * @param {number} target
//  * @return {number[]}
//  */

//First Answer, not as fast as second answer
//  var twoSum = function(nums, target) {
//     for (let i = 0; i < nums.length; i++) {
//         for (let j = i+1; j < nums.length; j++) {
//             if (nums[i] + nums[j] == target) {
//                 var resultArray = new Array(i, j);
//                 return resultArray;
//             }
//         }
//     }
// };

//Final Answer
var twoSum = function(nums, target) {
    let newArray = {};
    for (let i = 0; i < nums.length; i++) {
        let num = nums[i];
        let diff = target-num;
        if (newArray[diff] !== undefined) {
            let resultArray = new Array(newArray[diff], i);
            return resultArray;
        }
        newArray[num] = i;
    }
    return [];
};