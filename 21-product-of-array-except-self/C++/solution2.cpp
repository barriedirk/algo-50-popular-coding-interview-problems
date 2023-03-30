// By using cumulative product:

// Time complexity: O(n)
// Space complexity: O(n)

vector<int> productExceptSelf(vector<int> arr){
  int n = arr.size();
  int cumulativeFromLeft[n];
  cumulativeFromLeft[0] = 1;
  for(int i = 1; i < n; i++)
    cumulativeFromLeft[i] = cumulativeFromLeft[i-1] * arr[i-1];

  int cumulativeFromRight[n];
  cumulativeFromRight[n-1] = 1;
  for(int i = n-2; i >= 0; i--)
    cumulativeFromRight[i] = cumulativeFromRight[i+1] * arr[i+1];

  vector<int> output;
  for(int i = 0; i < n; i++)
    output.push_back(cumulativeFromLeft[i] * cumulativeFromRight[i]);
  
  return output;
}


