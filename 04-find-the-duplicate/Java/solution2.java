// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: depends on the sorting algorithm we use

static int findDuplicate(int[] arr){
  Arrays.sort(arr);
  for(int i = 1; i < arr.length; i++){
    if(arr[i] == arr[i-1]) return arr[i];
  }
  return 0;
}


