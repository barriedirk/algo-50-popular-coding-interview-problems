// By using recursion:

// Time complexity: O(φ^n) (φ = golden ratio = 1.618033...)
// Space complexity: O(n)

static int waysToDecode(String str, int i){
  int n = str.length();
  if(n == 0 || (i < n && str.charAt(i) == '0'))
    return 0;
  else if(i >= n-1)
    return 1;
  else if(Integer.parseInt("" + str.charAt(i) + str.charAt(i+1)) >= 10 &&  Integer.parseInt("" + str.charAt(i) + str.charAt(i+1)) <= 26)
    return waysToDecode(str, i+1) + waysToDecode(str, i+2);
  else
    return waysToDecode(str, i+1);
}

static int waysToDecode(String str){
  return waysToDecode(str, 0);
}


