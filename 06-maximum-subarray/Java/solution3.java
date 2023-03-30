// By using Kadane's algorithm:

// Time complexity: O(n)
// Space complexity: O(1)

static int maximumSubarray(int[] arr){
  int globalSum = Integer.MIN_VALUE;
  int localSum = 0;
  for(int element : arr){;
    localSum = Math.max(element, localSum + element);
    globalSum = Math.max(globalSum, localSum);
  }
  return globalSum;
}


