// By using dynamic programming + binary search:

// Time complexity: O(nlogn)
// Space complexity: O(n)

static int ceilIndex(ArrayList<Integer> arr, int num){
  int left = 0;
  int right = arr.size()-1;
  while(left < right-1){
    int mid = (left+right)/2;
    if(num == arr.get(mid))
      return mid;
    else if(num < arr.get(mid))
      right = mid;
    else
      left = mid;
  }
  return right;
}

static int lis(int[] arr){
  if(arr.length < 2) return arr.length;
  ArrayList<Integer> subsequence = new ArrayList<>();
  subsequence.add(arr[0]);
  for(int i = 1; i < arr.length; i++){
    if(arr[i] <= subsequence.get(0))
      subsequence.set(0, arr[i]);
    else if(arr[i] > subsequence.get(subsequence.size()-1))
      subsequence.add(arr[i]);
    else
      subsequence.set(ceilIndex(subsequence, arr[i]), arr[i]);
  }
  return subsequence.size();
}


