// Brute force solution (with cumulative sum):

// Time complexity: O(n²)
// Space complexity: O(1)

static int maximumSubarray(int[] arr){
  int maxSum = Integer.MIN_VALUE;
  for(int i = 0; i < arr.length; i++){
    int cumulativeSum = 0;
    for(int j = i; j < arr.length; j++){
      cumulativeSum += arr[j];
      maxSum = Math.max(maxSum, cumulativeSum);
    }
  }
  return maxSum;
}


