// By always getting the next permutation:

// Time complexity: O(n.n!)
// Space complexity: O(n.n!)


vector<int> getNextGreaterPermutation(vector<int> arr){
  int i = arr.size()-2;
  while(i >= 0 && arr[i] >= arr[i+1]) i--;
  if(i == -1) return arr;
  int j = arr.size()-1;
  while(arr[j] <= arr[i]) j--;
  swap(arr[i], arr[j]);
  int left = i+1;
  int right = arr.size()-1;
  while(left < right){
    swap(arr[left++], arr[right--]);
  }
  return arr;
}

vector<vector<int>> getPermutations(vector<int> arr){
  if(arr.size() < 2) return *new vector<vector<int>>{arr};
  sort(arr.begin(), arr.end());
  vector<vector<int>> permutations;
  permutations.push_back(arr);
  vector<int> greatestPermutation(arr);
  reverse(greatestPermutation.begin(), greatestPermutation.end());
  while(arr != greatestPermutation){
    arr = getNextGreaterPermutation(arr);
    permutations.push_back(arr);
  }
  return permutations;
}


