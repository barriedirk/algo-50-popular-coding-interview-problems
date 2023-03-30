// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

static boolean canJump(int[] arr, int i){
  if(i == arr.length-1) return true;
  for(int j = 1; j <= arr[i]; j++){
    if(canJump(arr, i+j)) return true;
  }
  return false;
}

static boolean canJump(int[] arr){
  return canJump(arr, 0);
}


