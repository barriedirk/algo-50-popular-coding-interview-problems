// Optimized brute force solution:

// Time complexity: O(n)
// Space complexity: O(n)

int longestConsecutiveSequence(vector<int> arr){
  if(arr.size() < 2) return arr.size();
  int maxLength = 1;
  unordered_set<int> values(arr.begin(), arr.end());
  for(int element : values)
    if(values.find(element-1) != values.end()) continue;
    else{
      int right = element;
      while(values.find(right+1) != values.end()) right++;
      maxLength = max(maxLength, right-element+1);
    }
  return maxLength;
}


