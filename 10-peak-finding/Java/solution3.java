// By using divide and conquer (recursively):

// Time complexity: O(logn)
// Space complexity: O(1)

static int findPeak(int[] arr, int left, int right){
  if(left >= right) return left;
  int mid = (left + right)/2;
  if(arr[mid] < arr[mid+1])
    return findPeak(arr, mid+1, right);
  else
    return findPeak(arr, left, mid);
}

static int findPeak(int[] arr){
  return findPeak(arr, 0, arr.length-1);
}


