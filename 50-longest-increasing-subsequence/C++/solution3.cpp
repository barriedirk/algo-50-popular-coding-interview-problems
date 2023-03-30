// By using dynamic programming + binary search:

// Time complexity: O(nlogn)
// Space complexity: O(n)

int ceilIndex(vector<int> arr, int num){
  int left = 0;
  int right = arr.size()-1;
  while(left < right-1){
    int mid = (left+right)/2;
    if(num == arr[mid])
      return mid;
    else if(num < arr[mid])
      right = mid;
    else
      left = mid;
  }
  return right;
}

int lis(vector<int> arr){
  if(arr.size() < 2) return arr.size();
  vector<int> subsequence;
  subsequence.push_back(arr[0]);
  for(int i = 1; i < arr.size(); i++){
    if(arr[i] <= subsequence[0])
      subsequence[0] = arr[i];
    else if(arr[i] > subsequence.back())
      subsequence.push_back(arr[i]);
    else
      subsequence[ceilIndex(subsequence, arr[i])] = arr[i];
  }
  return subsequence.size();
}


