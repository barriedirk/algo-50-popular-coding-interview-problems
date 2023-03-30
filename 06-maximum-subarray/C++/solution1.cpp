// Brute force solution:

// Time complexity: O(n³)
// Space complexity: O(1)

int maximumSubarray(vector<int> arr){
  int maxSum = INT_MIN;
  for(int i = 0; i < arr.size(); i++){
    for(int j = i; j < arr.size(); j++){
      int actualSum = 0;
      for(int k = i; k <= j; k++) actualSum += arr[k];
      maxSum = max(maxSum, actualSum);
    }  
  } 
  return maxSum;
}


