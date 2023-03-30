// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

bool canJump(vector<int> arr, int i = 0){
  if(i == arr.size()-1) return true;
  for(int j = 1; j <= arr[i]; j++){
    if(canJump(arr, i+j)) return true;
  }
  return false;
}


