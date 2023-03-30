// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: O(1) if we are allowed to modify the input, O(n) else

function longestConsecutiveSequence(arr) {
    if (arr.length < 2) return arr.length;
    arr.sort((a, b) => a - b);
    let maxLength = 1;
    let length = 1;
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] == arr[i - 1] + 1) length++;
        else if (arr[i] == arr[i - 1]) {
        } else length = 1;
        maxLength = Math.max(maxLength, length);
    }
    return maxLength;
}
