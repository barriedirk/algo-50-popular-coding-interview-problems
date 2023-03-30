// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(1)

static int findDuplicate(int[] arr){
  for(int i = 0; i < arr.length; i++){
    for(int j = i+1; j < arr.length; j++){
      if(arr[i] == arr[j]) return arr[i];
    }
  }
  return 0;
}


