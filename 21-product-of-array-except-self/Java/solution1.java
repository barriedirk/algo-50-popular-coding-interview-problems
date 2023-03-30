// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(n)

static int[] productExceptSelf(int[] arr){
  int n = arr.length;
  int[] output = new int[n];
  for(int i = 0; i < n; i++){
    int product = 1;
    for(int j = 0; j < n; j++){
      if(i == j) continue;
      else product *= arr[j];
    }
    output[i] = product;
  }
  return output;
}


