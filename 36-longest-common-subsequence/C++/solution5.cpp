// Space-optimized dynamic programming solution:

// Time complexity: O(nm)
// Space complexity: O(m)

int lcs(string str1, string str2){
  int n = str1.length();
  int m = str2.length();
  int dp[m+1];
  int tempDp[m+1];
  for(int i = 0; i < m+1; i++) dp[i] = tempDp[i] = 0;
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < m+1; j++){
      if(str1[i-1] == str2[j-1])
        tempDp[j] = 1 + dp[j-1];
      else
        tempDp[j] = max(tempDp[j-1], dp[j]);
    }
    for(int j = 1; j < m+1; j++){
      dp[j] = tempDp[j];
      tempDp[j] = 0;
    }
  }
  return dp[m];
}


