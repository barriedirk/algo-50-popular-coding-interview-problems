// By using divide and conquer (iteratively):

// Time complexity: O(logn)
// Space complexity: O(1)

int findPeak(vector<int> arr){
  int left = 0;
  int right = arr.size()-1;
  while(left < right){
    int mid = (left + right)/2;
    if(arr[mid] < arr[mid+1]) left = mid+1;
    else right = mid;
  }
  return left;
}


