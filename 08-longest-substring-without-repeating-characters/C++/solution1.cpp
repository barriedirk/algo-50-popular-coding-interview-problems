// Brute force solution:

// Time complexity: O(n³)
// Space complexity: O(n)

bool withoutRepeating(string str){
  bool visited[128] = {false};
  for(int i = 0; i < str.length(); i++){
    if(visited[(int) str.at(i)]) return false;
    else visited[(int) str.at(i)] = true;
  }
  return true;
}

int longestSubstringWithoutRepeating(string str){
  int maxLength = 0;
  for(int i = 0; i < str.length(); i++){
    for(int j = i; j < str.length(); j++){
      string substr = str.substr(i, j-i+1);
      if(withoutRepeating(substr) && substr.length() > maxLength)
        maxLength = substr.length();
    }
  }
  return maxLength;
}


