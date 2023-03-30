// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(1)

int findDuplicate(vector<int> arr){
  for(int i = 0; i < arr.size(); i++){
    for(int j = i+1; j < arr.size(); j++){
      if(arr[i] == arr[j]) return arr[i];
    }
  }
  return 0;
}


