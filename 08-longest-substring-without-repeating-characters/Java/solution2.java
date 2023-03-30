// By using two pointers technique:

// Time complexity: O(n)
// Space complexity: O(1)


static int longestSubstringWithoutRepeating(String str){
  int maxLength = 0;
  int start = 0;
  int[] indexes = new int[128];
  for(int i = 0; i < 128; i++) indexes[i] = -1;
  for(int i = 0; i < str.length(); i++){
    if(indexes[(int) str.charAt(i)] >= start)
      start = indexes[(int) str.charAt(i)] + 1;
    indexes[(int) str.charAt(i)] = i;
    maxLength = Math.max(maxLength, i-start+1);
  }
  return maxLength;
}


