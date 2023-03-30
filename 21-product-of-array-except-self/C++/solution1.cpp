// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(n)

vector<int> productExceptSelf(vector<int> arr){
  int n = arr.size();
  vector<int> output;
  for(int i = 0; i < n; i++){
    int product = 1;
    for(int j = 0; j < n; j++){
      if(i == j) continue;
      else product *= arr[j];
    }
    output.push_back(product);
  }
  return output;
}


