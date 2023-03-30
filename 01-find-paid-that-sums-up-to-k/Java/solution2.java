// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: depends on the sorting algorithm we use

static boolean findPair(int[] arr, int k){
  Arrays.sort(arr);
  int left = 0, right = arr.length-1;
  while(left < right){
    if(arr[left] + arr[right] == k) return true;
    else if(arr[left] + arr[right] < k) left++;
    else right--;
  }
  return false;
}


