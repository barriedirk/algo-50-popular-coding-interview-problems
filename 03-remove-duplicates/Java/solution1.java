// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(n)

static int[] removeDuplicates(int[] arr){
  ArrayList<Integer> list = new ArrayList();
  for(int element : arr)
    if(!list.contains(element))
      list.add(element);
  int[] noDuplicatesArr = new int[list.size()];
  for(int i = 0; i < noDuplicatesArr.length; i++)
    noDuplicatesArr[i] = list.get(i);
  return noDuplicatesArr;
}


