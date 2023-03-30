// By traversing the whole array:

// Time complexity: O(n)
// Space complexity: O(1)

int minimum(vector<int> arr){
  int arrMin = INT_MAX;
  for(int i = 0; i < arr.size(); i++) arrMin = min(arrMin, arr[i]);
  return arrMin;
}


