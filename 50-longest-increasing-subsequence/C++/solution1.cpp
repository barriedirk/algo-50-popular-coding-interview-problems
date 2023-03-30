// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

int lis(vector<int> arr, int i = 0, int previous = numeric_limits<int>::min()){
  if(i == arr.size())
    return 0;
  else if(arr[i] <= previous)
    return lis(arr, i+1, previous);
  else
    return max(1 + lis(arr, i+1, arr[i]), lis(arr, i+1, previous));
}


