// Time-optimized recursive solution (memoization):

// Time complexity: O(nm)
// Space complexity: O(nm)

static int lcs(String str1, String str2, int i, int j, HashMap<String,Integer> memoiz){
  String key = i + " " + j;
  if(memoiz.containsKey(key))
    return memoiz.get(key);
  else if(i == str1.length() || j == str2.length())
    return 0;
  else if(str1.charAt(i) == str2.charAt(j))
    return 1 + lcs(str1, str2, i+1, j+1, memoiz);
  else{
    int output = Math.max(lcs(str1, str2, i+1, j, memoiz), lcs(str1, str2, i, j+1, memoiz));
    memoiz.put(key, output);
    return output;
  }
}

static int lcs(String str1, String str2){
  HashMap<String,Integer> memoiz = new HashMap<>();
  return lcs(str1, str2, 0, 0, memoiz);
}


