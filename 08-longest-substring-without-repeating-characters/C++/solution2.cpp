// By using two pointers technique:

// Time complexity: O(n)
// Space complexity: O(1)


int longestSubstringWithoutRepeating(string str){
  int maxLength = 0;
  int start = 0;
  int indexes[128];
  for(int i = 0; i < 128; i++) indexes[i] = -1;
  for(int i = 0; i < str.length(); i++){
    if(indexes[(int) str.at(i)] >= start)
      start = indexes[(int) str.at(i)] + 1;
    indexes[(int) str.at(i)] = i;
    maxLength = max(maxLength, i-start+1);
  }
  return maxLength;
}


