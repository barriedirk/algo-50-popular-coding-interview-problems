// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(n)

vector<int> removeDuplicates(vector<int> arr){
  vector<int> noDuplicatesArr;
  for(int i = 0; i < arr.size(); i++)
    if(find(noDuplicatesArr.begin(), noDuplicatesArr.end(), arr[i]) == noDuplicatesArr.end())
      noDuplicatesArr.push_back(arr[i]);
  return noDuplicatesArr;
}


