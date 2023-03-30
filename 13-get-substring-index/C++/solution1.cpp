// Brute force solution:

// Time complexity: O(nm)
// Space complexity: O(1)

int substrIndex(string str1, string str2){
  int n = str1.length();
  int m = str2.length();
  for(int i = 0; i <= n-m; i++){
    bool found = true;
    for(int j = 0; j < m; j++){
      if(str1[i+j] != str2[j]){
        found = false;
        break;
      }
    }
    if(found) return i;
  }
  return -1;
}


