// By using recursion + memoization:

// Time complexity: O(nk)
// Space complexity: O(nk)

int subsetsThatSumUpToK(vector<int> arr, int k, int i = 0, int sum = 0, unordered_map<string,int> memoiz = unordered_map<string,int>()){
  string key = to_string(i) + " " + to_string(sum);
  if(memoiz.find(key) != memoiz.end())
    return memoiz[key];
  else if(sum == k)
    return 1;
  else if(sum > k || i >= arr.size())
    return 0;
  else{
    int nbSubsets = subsetsThatSumUpToK(arr, k, i+1, sum + arr[i], memoiz) + subsetsThatSumUpToK(arr, k, i+1, sum, memoiz);
    memoiz[key] = nbSubsets;
    return nbSubsets;
  }
}


