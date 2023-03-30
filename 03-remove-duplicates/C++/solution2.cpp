// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: O(n)

vector<int> removeDuplicates(vector<int> arr){
  if(arr.size() == 0) return {};
  sort(arr, arr + arr.size());
  vector<int> noDuplicatesArr;
  noDuplicatesArr.push_back(arr[0]);
  for(int i = 1; i < arr.size(); i++){
    if(arr[i] != arr[i-1])
      noDuplicatesArr.push_back(arr[i]);
  }
  return noDuplicatesArr;
}


