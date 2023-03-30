// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(1)

static String shortestPalindrome(String str){
  int mirrorLength = 0;
  for(int i = 0; i <= str.length(); i++){
    if(str.substring(0, i).equals(new StringBuilder(str.substring(0, i)).reverse().toString()))
      mirrorLength = i;
  }
  return new StringBuilder(str.substring(mirrorLength)).reverse() + str;
}


