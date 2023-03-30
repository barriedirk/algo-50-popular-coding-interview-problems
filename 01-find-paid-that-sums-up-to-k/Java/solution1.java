// By checking all pairs (brute force solution):

// Time complexity: O(n²)
// Space complexity: O(1)

static boolean findPair(int[] arr, int k){
  for(int i = 0; i < arr.length; i++){
    for(int j = i+1; j < arr.length; j++){
      if(arr[i] + arr[j] == k) return true;
    }
  }
  return false;
}


