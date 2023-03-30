// By using divide and conquer (recursively):

// Time complexity: O(logn)
// Space complexity: O(1)

static int minimum(int[] arr, int left, int right){
  if(left >= right || arr[right] > arr[left]) return arr[left];
  int mid = (left + right)/2;
  if(arr[mid+1] < arr[mid]) return arr[mid+1];
  else if(arr[mid] < arr[mid-1]) return arr[mid];
  else if(arr[mid] > arr[right]) return minimum(arr, mid+1, right);
  else return minimum(arr, left, mid-1);
}

static int minimum(int[] arr){
  return minimum(arr, 0, arr.length-1);
}


