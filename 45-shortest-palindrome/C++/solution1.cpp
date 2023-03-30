// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(1)

string shortestPalindrome(string str){
  int mirrorLength = 0;
  for(int i = 0; i <= str.length(); i++){
    string substr = str.substr(0, i);
    if(substr == string(substr.rbegin(), substr.rend()))
      mirrorLength = i;
  }
  string substr = str.substr(mirrorLength);
  return string(substr.rbegin(), substr.rend()) + str;
}


