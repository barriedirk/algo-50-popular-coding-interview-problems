// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: O(1) if we are allowed to modify the input, O(n) else

static int longestConsecutiveSequence(int[] arr){
  if(arr.length < 2) return arr.length;
  Arrays.sort(arr);
  int maxLength = 1;
  int length = 1;
  for(int i = 1; i < arr.length; i++){
    if(arr[i] == arr[i-1] + 1) length++;
    else if(arr[i] == arr[i-1]) {}
    else length = 1;
    maxLength = Math.max(maxLength, length);
  }
  return maxLength;
}


