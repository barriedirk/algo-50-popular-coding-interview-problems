// By using dynamic programming:

// Time complexity: O(nm)
// Space complexity: O(nm)

function minDistance(word1, word2) {
    let n = word1.length;
    let m = word2.length;
    let dp = [...Array(n + 1)].map((row) => [...Array(m + 1)].map((x) => 0));
    for (let i = 0; i < m + 1; i++) dp[0][i] = i;
    for (let i = 0; i < n + 1; i++) dp[i][0] = i;
    for (let i = 1; i < n + 1; i++) {
        for (let j = 1; j < m + 1; j++) {
            if (word1[i - 1] == word2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] =
                    1 + Math.min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
        }
    }
    return dp[n][m];
}
