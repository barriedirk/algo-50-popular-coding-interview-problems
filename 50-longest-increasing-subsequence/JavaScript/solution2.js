// By using dynamic programming:

// Time complexity: O(n²)
// Space complexity: O(n)

function lis(arr) {
    if (arr.length < 2) return arr.length;
    let dp = [...Array(arr.length)].map((x) => 0);
    let maxLength = 0;
    for (let i = 0; i < arr.length; i++) {
        let maxPreviousLength = 0;
        for (let j = 0; j < i; j++) {
            if (arr[i] > arr[j])
                maxPreviousLength = Math.max(maxPreviousLength, dp[j]);
        }
        dp[i] = maxPreviousLength + 1;
        maxLength = Math.max(maxLength, dp[i]);
    }
    return maxLength;
}
