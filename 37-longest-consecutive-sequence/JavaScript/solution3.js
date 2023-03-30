// Optimized brute force solution:

// Time complexity: O(n)
// Space complexity: O(n)

function longestConsecutiveSequence(arr) {
    if (arr.length < 2) return arr.length;
    let maxLength = 1;
    let values = new Set(arr);
    values.forEach((element) => {
        if (values.has(element - 1)) return;
        else {
            let right = element;
            while (values.has(right + 1)) right++;
            maxLength = Math.max(maxLength, right - element + 1);
        }
    });
    return maxLength;
}
