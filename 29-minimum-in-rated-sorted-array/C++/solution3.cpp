// By using divide and conquer (recursively):

// Time complexity: O(logn)
// Space complexity: O(1)

int minimumRec(vector<int> arr, int left, int right){
  if(left >= right || arr[right] > arr[left]) return arr[left];
  int mid = (left + right)/2;
  if(arr[mid+1] < arr[mid]) return arr[mid+1];
  else if(arr[mid] < arr[mid-1]) return arr[mid];
  else if(arr[mid] > arr[right]) return minimumRec(arr, mid+1, right);
  else return minimumRec(arr, left, mid-1);
}

int minimum(int* arr, int arrLength){
  return minimumRec(arr, 0, arr.size()-1);
}


