// Brute force solution:

// Time complexity: O((n+m).2^n)
// Space complexity: O(n.2^n)

static boolean isSubsequence(String str1, String str2){
  int ptr1 = 0, ptr2 = 0;
  while(ptr1 < str1.length() && ptr2 < str2.length()){
    if(str1.charAt(ptr1) == str2.charAt(ptr2)){
      ptr1++;
      ptr2++;
    } else {
      ptr1++;
    }
  }
  return ptr2 == str2.length();
}

static void getSubsequences(String str, int i, String subsequence, ArrayList<String> subsequences){
  if(i == str.length()){
    subsequences.add(subsequence);
  }else{
    getSubsequences(str, i+1, subsequence+str.charAt(i), subsequences);
    getSubsequences(str, i+1, subsequence, subsequences);
  }
}

static ArrayList<String> getSubsequences(String str){
  ArrayList<String> subsequences = new ArrayList<>();
  getSubsequences(str, 0, "", subsequences);
  return subsequences;
}

static int lcs(String str1, String str2){
  int maxLength = 0;
  ArrayList<String> subsequences = getSubsequences(str1);
  for(String subsequence : subsequences){
    if(isSubsequence(str2, subsequence) && subsequence.length() > maxLength)
      maxLength = subsequence.length();
  }
  return maxLength;
}


