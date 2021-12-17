/**
 * @param {string} s
 * @param {number} minJump
 * @param {number} maxJump
 * @return {boolean}
 */
 var canReach = function(s, minJump, maxJump) {
    let j = s.length-1;
    if(s[j] == '1') {
        return false;
    }
    const queue = [];
    queue.push(0);
    let max = 0;
    while (queue.length) {
        let i = queue.shift();
        if (i === j) {
            return true;
        }
        for (let x = Math.max(i + minJump, max); x <= Math.min(i + maxJump, j); x++) {
            if (s[x] == '0') {
                queue.push(x);
            }
        }
        max = Math.min(i + maxJump + 1, j);
    }
    return false;
};
