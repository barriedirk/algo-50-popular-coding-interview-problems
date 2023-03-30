// By keeping track of the max index that we can reach:

// Time complexity: O(n)
// Space complexity: O(1)

bool canJump(vector<int> arr){
  int n = arr.size();
  int maxIndex = 0;
  for(int i = 0; i < n; i++){
    if(i > maxIndex) return false;
    else maxIndex = max(maxIndex, i+arr[i]);
  }
  return maxIndex >= n-1;
}


