// By using LPS array:

// Time complexity: O(n)
// Space complexity: O(n)

static int[] getLpsArr(String str){
  int[] lpsArr = new int[str.length()];
  int length = 0;
  int i = 1;
  while(i < str.length()){
    if(str.charAt(i) == str.charAt(length))
      lpsArr[i++] = ++length;
    else if(length > 0)
      length = lpsArr[length-1];
    else
      lpsArr[i++] = 0;
  }
  return lpsArr;
}

static String shortestPalindrome(String str){
  String concatenation = str + "#" + new StringBuilder(str).reverse();
  int[] lpsArr = getLpsArr(concatenation);
  int mirrorLength = lpsArr[lpsArr.length-1];
  return new StringBuilder(str.substring(mirrorLength)).reverse() + str;
}


