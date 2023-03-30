// By using recursion + memoization:

// Time complexity: O(nk)
// Space complexity: O(nk)

static int subsetsThatSumUpToK(int[] arr, int k, int i, int sum, HashMap<String,Integer> memoiz){
  String key = i + " " + sum;
  if(memoiz.containsKey(key))
    return memoiz.get(key);
  else if(sum == k)
    return 1;
  else if(sum > k || i >= arr.length)
    return 0;
  else{
    int nbSubsets = subsetsThatSumUpToK(arr, k, i+1, sum + arr[i], memoiz) + subsetsThatSumUpToK(arr, k, i+1, sum, memoiz);
    memoiz.put(key, nbSubsets);
    return nbSubsets;
  }
}

static int subsetsThatSumUpToK(int[] arr, int k){
  HashMap<String,Integer> memoiz = new HashMap<>();
  return subsetsThatSumUpToK(arr, k, 0, 0, memoiz);
}


