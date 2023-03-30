// By using LPS array:

// Time complexity: O(n)
// Space complexity: O(n)

int* getLpsArr(string str){
  int* lpsArr = (int*) calloc(str.length(), sizeof(int));
  int length = 0;
  int i = 1;
  while(i < str.length()){
    if(str[i] == str[length])
      lpsArr[i++] = ++length;
    else if(length > 0)
      length = lpsArr[length-1];
    else
      lpsArr[i++] = 0;
  }
  return lpsArr;
}

string shortestPalindrome(string str){
  string concatenation = str + "#" + string(str.rbegin(), str.rend());
  int* lpsArr = getLpsArr(concatenation);
  int mirrorLength = lpsArr[concatenation.length()-1];
  string substr = str.substr(mirrorLength);
  return string(substr.rbegin(), substr.rend()) + str;
}


