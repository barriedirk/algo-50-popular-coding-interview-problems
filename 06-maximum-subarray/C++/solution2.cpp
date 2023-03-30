// Brute force solution (with cumulative sum):

// Time complexity: O(n²)
// Space complexity: O(1)


int maximumSubarray(vector<int> arr){
  int maxSum = INT_MIN;
  for(int i = 0; i < arr.size(); i++){
    int cumulativeSum = 0;
    for(int j = i; j < arr.size(); j++){
      cumulativeSum += arr[j];
      maxSum = max(maxSum, cumulativeSum);
    }
  }
  return maxSum;
}


