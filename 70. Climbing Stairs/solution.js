/**
 * @param {number} n
 * @return {number}
 */
 var climbStairs = function(n) {
    let v1 = 1;
    let v2 = 1;
    let temp;
    for (let i = 0; i < n-1; i++){
        temp = v1;
        v1 = v1 + v2;
        v2 = temp;
    }
    return v1;
};