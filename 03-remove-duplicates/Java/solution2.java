// By sorting the array:

// Time complexity: O(nlogn)
// Space complexity: O(n)

static int[] removeDuplicates(int[] arr){
  if(arr.length == 0){
    int[] emptyArr = new int[0];
    return emptyArr;
  };
  Arrays.sort(arr);
  ArrayList<Integer> list = new ArrayList();
  list.add(arr[0]);
  for(int i = 1; i < arr.length; i++){
    if(arr[i] != arr[i-1])
      list.add(arr[i]);
  }
  int[] noDuplicatesArr = new int[list.size()];
  for(int i = 0; i < noDuplicatesArr.length; i++)
    noDuplicatesArr[i] = list.get(i);
  return noDuplicatesArr;
}


