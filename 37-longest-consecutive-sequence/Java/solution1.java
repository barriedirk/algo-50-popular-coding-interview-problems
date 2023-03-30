// Brute force solution:

// Time complexity: O(n³)
// Space complexity: O(1)

static boolean contains(int[] arr, int searchedValue){
  for(int value : arr){
    if(value == searchedValue) return true;
  }
  return false;
}

static int longestConsecutiveSequence(int[] arr){
  if(arr.length < 2) return arr.length;
  int maxLength = 1;
  for(int element : arr){
    int left = element;
    while(contains(arr, left-1)) left--;
    int right = element;
    while(contains(arr, right+1)) right++;
    maxLength = Math.max(maxLength, right-left+1);
  }
  return maxLength;
}


