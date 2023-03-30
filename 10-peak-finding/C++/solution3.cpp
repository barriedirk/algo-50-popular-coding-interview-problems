// By using divide and conquer (recursively):

// Time complexity: O(logn)
// Space complexity: O(1)

int findPeak(vector<int> arr, int left, int right){
  if(left >= right) return left;
  int mid = (left + right)/2;
  if(arr[mid] < arr[mid+1])
    return findPeak(arr, mid+1, right);
  else
    return findPeak(arr, left, mid);
}

int findPeak(vector<int> arr){
  return findPeak(arr, 0, arr.size()-1);
}


