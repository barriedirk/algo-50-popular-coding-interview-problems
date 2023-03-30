// Brute force solution:

// Time complexity: O(n^3)
// Space complexity: O(1)

function longestConsecutiveSequence(arr) {
    if (arr.length < 2) return arr.length;
    let maxLength = 1;
    for (let element of arr) {
        let left = element;
        while (arr.includes(left - 1)) left--;
        let right = element;
        while (arr.includes(right + 1)) right++;
        maxLength = Math.max(maxLength, right - left + 1);
    }
    return maxLength;
}
