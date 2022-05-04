/**
 * @param {number} n - a positive integer
 * @return {number}
 */
 var hammingWeight = function(n) {
    let count = 0;
    let stringN = n.toString(2);
    for (let i = 0; i <= 32; i++)
        if (stringN[i] === '1') count++;
    return count;
};