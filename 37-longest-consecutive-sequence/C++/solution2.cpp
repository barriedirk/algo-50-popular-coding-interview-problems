// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: O(1) if we are allowed to modify the input, O(n) else

int longestConsecutiveSequence(vector<int>& arr){
  if(arr.size() < 2) return arr.size();
  sort(arr.begin(), arr.end());
  int maxLength = 1;
  int length = 1;
  for(int i = 1; i < arr.size(); i++){
    if(arr[i] == arr[i-1] + 1) length++;
    else if(arr[i] == arr[i-1]) {}
    else length = 1;
    maxLength = max(maxLength, length);
  }
  return maxLength;
}


