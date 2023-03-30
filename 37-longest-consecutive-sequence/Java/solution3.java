// Optimized brute force solution:

// Time complexity: O(n)
// Space complexity: O(n)

static int longestConsecutiveSequence(int[] arr){
  if(arr.length < 2) return arr.length;
  int maxLength = 1;
  Set<Integer> values = new HashSet<>();
  for(int element : arr) values.add(element);
  for(int element : values)
    if(values.contains(element-1)) continue;
    else{
      int right = element;
      while(values.contains(right+1)) right++;
      maxLength = Math.max(maxLength, right-element+1);
    }
  return maxLength;
}


