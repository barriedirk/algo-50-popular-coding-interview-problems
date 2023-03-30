// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)


static boolean findPair(int[] arr, int k){
  HashMap<Integer,Boolean> visited = new HashMap<Integer,Boolean>();
  for(int element : arr){
    if(visited.containsKey(k-element)) return true;
    else visited.put(element, true);
  }
  return false;
}


