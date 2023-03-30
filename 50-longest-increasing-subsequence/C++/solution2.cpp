// By using dynamic programming:

// Time complexity: O(n²)
// Space complexity: O(n)

int lis(vector<int> arr){
  if(arr.size() < 2) return arr.size();
  int dp[arr.size()];
  int maxLength = 0;
  for(int i = 0; i < arr.size(); i++){
    int maxPreviousLength = 0;
    for(int j = 0; j < i; j++){
      if(arr[i] > arr[j])
        maxPreviousLength = max(maxPreviousLength, dp[j]);
    }
    dp[i] = maxPreviousLength + 1;
    maxLength = max(maxLength, dp[i]);
  }
  return maxLength;
}


