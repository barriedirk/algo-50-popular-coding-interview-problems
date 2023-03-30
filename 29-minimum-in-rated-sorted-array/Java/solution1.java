// By traversing the whole array:

// Time complexity: O(n)
// Space complexity: O(1)


static int minimum(int[] arr){
  int min = Integer.MAX_VALUE;
  for(int value : arr) min = Math.min(min, value);
  return min;
}


