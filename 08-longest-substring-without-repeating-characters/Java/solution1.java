// Brute force solution:

// Time complexity: O(n³)
// Space complexity: O(n)

static boolean withoutRepeating(String str){
  boolean[] visited = new boolean[128];
  for(int i = 0; i < str.length(); i++){
    if(visited[(int) str.charAt(i)]) return false;
    else visited[(int) str.charAt(i)] = true;
  }
  return true;
}

static int longestSubstringWithoutRepeating(String str){
  int maxLength = 0;
  for(int i = 0; i < str.length(); i++){
    for(int j = i; j < str.length(); j++){
      String substr = str.substring(i, j+1);
      if(withoutRepeating(substr) && substr.length() > maxLength)
        maxLength = substr.length();
    }
  }
  return maxLength;
}


