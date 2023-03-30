// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)

static int findDuplicate(int[] arr){
  HashMap<Integer,Boolean> visited = new HashMap();
  for(int element : arr){
    if(visited.containsKey(element)) return element;
    else visited.put(element, true);
  }
  return 0;
}


