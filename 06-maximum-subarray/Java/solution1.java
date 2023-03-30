// Brute force solution:

// Time complexity: O(n³)
// Space complexity: O(1)

static int maximumSubarray(int[] arr){
  int maxSum = Integer.MIN_VALUE;
  for(int i = 0; i < arr.length; i++){
    for(int j = i; j < arr.length; j++){
      int actualSum = 0;
      for(int k = i; k <= j; k++) actualSum += arr[k];
      maxSum = Math.max(maxSum, actualSum);
    }  
  } 
  return maxSum;
}


