// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

int subsetsThatSumUpToK(vector<int> arr, int k, int i = 0, int sum = 0){
  if(sum == k)
    return 1;
  else if(sum > k || i >= arr.size())
    return 0;
  else
    return subsetsThatSumUpToK(arr, k, i+1, sum + arr[i]) + subsetsThatSumUpToK(arr, k, i+1, sum);
}


