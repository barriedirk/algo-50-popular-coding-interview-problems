// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)

static int[] removeDuplicates(int[] arr){
  HashMap<Integer,Boolean> visited = new HashMap<Integer,Boolean>();
  for(int element : arr) 
    visited.put(element, true);
  int[] noDuplicatesArr = new int[visited.keySet().size()];
  int i = 0;
  for(Integer key : visited.keySet())
    noDuplicatesArr[i++] = key;
  return noDuplicatesArr;
}

