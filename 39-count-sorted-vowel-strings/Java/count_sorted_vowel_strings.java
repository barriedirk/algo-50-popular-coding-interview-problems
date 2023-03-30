// Solution 1 (Backtracking):
// Time complexity: O(n^5)
// Space complexity: O(n) (because of the call stack size)
public static int count(int n, char last){
    if(n == 0) return 1;
    else{
        int nb = 0;
        char[] vowels = {'a', 'e', 'i', 'o', 'u'};
        for(char vowel : vowels)
            if(last <= vowel) nb += count(n-1, vowel);
        return nb;
    }
}

public static int count(int n){
    return count(n, ' ');
}


// Solution 2 (Dynamic programming):
// Time complexity: O(n)
// Space complexity: O(n) (because of the dp array)
public static int count(int n){
    int NB_VOWELS = 5;
    int[][] dp = new int[n][NB_VOWELS];
    for(int i = 0; i < NB_VOWELS; i++) dp[0][i] = 1;
    for(int i = 1; i < n; i++){
        dp[i][0] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
        dp[i][1] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
        dp[i][2] = dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
        dp[i][3] = dp[i-1][3] + dp[i-1][4];
        dp[i][4] = dp[i-1][4];
    }
    int sum = 0;
    for(int i = 0; i < NB_VOWELS; i++) sum += dp[n-1][i];
    return sum;
}

// BONUS: Space-optimized dynamic programming solution:
// Time complexity: O(n)
// Space complexity: O(1)
// Explanation: you could notice that we were working with only 2 rows at once and not the whole array, 
// so we can just work with 2 rows of 5 elements, the extra space would be 10, which is a constant
public static int count(int n){
    int NB_VOWELS = 5;
    int[] prev = new int[NB_VOWELS];
    int[] curr = new int[NB_VOWELS];
    for(int i = 0; i < NB_VOWELS; i++) prev[i] = 1;
    for(int i = 1; i < n; i++){
        curr[0] = prev[0] + prev[1] + prev[2] + prev[3] + prev[4];
        curr[1] = prev[1] + prev[2] + prev[3] + prev[4];
        curr[2] = prev[2] + prev[3] + prev[4];
        curr[3] = prev[3] + prev[4];
        curr[4] = prev[4];
        for(int j = 0; j < NB_VOWELS; j++)
          prev[j] = curr[j];
    }
    int sum = 0;
    for(int i = 0; i < NB_VOWELS; i++) sum += prev[i];
    return sum;
}

// Solution 3 (Math):
// Time complexity: O(1)
// Space complexity: O(1)
public static int count(int n){
    return (n+4)*(n+3)*(n+2)*(n+1)/24;
}