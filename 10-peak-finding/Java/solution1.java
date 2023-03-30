// By traversing the whole array:

// Time complexity: O(n)
// Space complexity: O(1)

static int findPeak(int[] arr){
  for(int i = 0; i < arr.length; i++)
    if((i == 0 || arr[i] >= arr[i-1]) && (i == arr.length-1 || arr[i] >= arr[i+1]))
      return i;
  return -1;
}


