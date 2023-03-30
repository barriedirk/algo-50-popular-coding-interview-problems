// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

static int lis(int[] arr, int i, int previous){
  if(i == arr.length)
    return 0;
  else if(arr[i] <= previous)
    return lis(arr, i+1, previous);
  else
    return Math.max(1 + lis(arr, i+1, arr[i]), lis(arr, i+1, previous));
}

static int lis(int[] arr){
  return lis(arr, 0, Integer.MIN_VALUE);
}


