// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)

int findDuplicate(vector<int> arr){
  unordered_map<int,bool> visited;
  for(int i = 0; i < arr.size(); i++){
    if(visited.find(arr[i]) != visited.end()) return arr[i];
    else visited[arr[i]] = true;
  }
  return 0;
}


