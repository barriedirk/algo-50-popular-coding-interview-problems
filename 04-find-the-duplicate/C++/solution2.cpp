// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: depends on the sorting algorithm we use

int findDuplicate(vector<int> arr){
  sort(arr.begin(), arr.end());
  for(int i = 1; i < arr.size(); i++){
    if(arr[i] == arr[i-1]) return arr[i];
  }
  return 0;
}


