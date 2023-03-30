// By using recursion:

// Time complexity: O(n.n!)
// Space complexity: O(n.n!)


vector<vector<int>> getPermutations(vector<int> arr){
  if(arr.size() < 2){
    return *new vector<vector<int>>{arr};
  }else{
    vector<vector<int>> permutations;
    for(int i = 0; i < arr.size(); i++){
      if(find(arr.begin(), arr.begin()+i, arr[i]) == arr.begin()+i){
        vector<int> remainingElems(arr);
        remainingElems.erase(remaining.begin()+i);
        vector<vector<int>> remainingPermutations = getPermutations(remainingElems);
        for(int j = 0; j < remainingPermutations.size(); j++){
          remainingPermutations[j].push_back(arr[i]);
          permutations.push_back(remainingPermutations[j]);
        }
      }
    }
    return permutations;
  }
}


