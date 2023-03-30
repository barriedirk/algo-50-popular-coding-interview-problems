// Brute force solution:

// Time complexity: O(n³)
// Space complexity: O(1)

int longestConsecutiveSequence(vector<int>& arr){
  if(arr.size() < 2) return arr.size();
  int maxLength = 1;
  for(int element : arr){
    int left = element;
    while(find(arr.begin(), arr.end(), left-1) != arr.end()) left--;
    int right = element;
    while(find(arr.begin(), arr.end(), right+1) != arr.end()) right++;
    maxLength = max(maxLength, right-left+1);
  }
  return maxLength;
}


