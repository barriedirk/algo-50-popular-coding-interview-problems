// Time complexity: O(n.2^n)
// Space complexity: O(n.2^n)

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


