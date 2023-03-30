// By using dynamic programming:

// Time complexity: O(n²)
// Space complexity: O(n)

static int lis(int[] arr){
  if(arr.length < 2) return arr.length;
  int[] dp = new int[arr.length];
  int maxLength = 0;
  for(int i = 0; i < arr.length; i++){
    int maxPreviousLength = 0;
    for(int j = 0; j < i; j++){
      if(arr[i] > arr[j])
        maxPreviousLength = Math.max(maxPreviousLength, dp[j]);
    }
    dp[i] = maxPreviousLength + 1;
    maxLength = Math.max(maxLength, dp[i]);
  }
  return maxLength;
}


