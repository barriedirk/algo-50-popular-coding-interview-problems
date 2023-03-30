// Space-optimized dynamic programming solution:

// Time complexity: O(nm)
// Space complexity: O(m)

static int lcs(String str1, String str2){
  int n = str1.length();
  int m = str2.length();
  int[] dp = new int[m+1];
  int[] tempDp = new int[m+1];
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < m+1; j++){
      if(str1.charAt(i-1) == str2.charAt(j-1))
        tempDp[j] = 1 + dp[j-1];
      else
        tempDp[j] = Math.max(tempDp[j-1], dp[j]);
    }
    for(int j = 1; j < m+1; j++){
      dp[j] = tempDp[j];
      tempDp[j] = 0;
    }
  }
  return dp[m];
}


