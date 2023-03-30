// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)

bool findPair(int* arr, int arrLength, int k){
  unordered_map<int,bool> visited;
  for(int i = 0; i < arrLength; i++){
    if(visited.find(k-arr[i]) != visited.end()) return true;
    else visited[arr[i]] = true;
  }
  return false;
}


