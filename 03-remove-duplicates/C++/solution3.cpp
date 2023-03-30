// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)

vector<int> removeDuplicates(vector<int> arr){
  unordered_map<int,bool> visited;
  for(int i = 0; i < arr.size(); i++) 
    visited[arr[i]] = true;
  vector<int> noDuplicatesArr;
  for(auto const& pair : visited)
    noDuplicatesArr.push_back(pair.first);
  return noDuplicatesArr;
}


