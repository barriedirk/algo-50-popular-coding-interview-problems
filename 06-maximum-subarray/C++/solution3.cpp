// By using Kadane's algorithm:

// Time complexity: O(n)
// Space complexity: O(1)

int maximumSubarray(vector<int> arr){
  int globalSum = numeric_limits<int>::min();
  int localSum = 0;
  for(int i = 0; i < arr.size(); i++){
    localSum = max(arr[i], localSum + arr[i]);
    globalSum = max(globalSum, localSum);
  }
  return globalSum;
}


