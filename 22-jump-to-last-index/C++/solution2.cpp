// By using dynamic programming:

// Time complexity: O(n²)
// Space complexity: O(n)

bool canJump(vector<int> arr){
  int n = arr.size();
  bool dp[n];
  for(int i = 0; i < n; i++) dp[i] = false;
  dp[0] = true;
  for(int i = 0; i < n; i++){
    if(!dp[i]){
      return false;
    }else if(i+arr[i] >= n-1){
      return true;
    }else{
      for(int j = 1; j <= arr[i]; j++)
        dp[i+j] = true;
    }
  }
  return dp[n-1];
}


