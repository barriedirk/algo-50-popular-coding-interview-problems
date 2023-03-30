// By using recursion:

// Time complexity: O(n.n!)
// Space complexity: O(n.n!)

static ArrayList<ArrayList<Integer>> getPermutations(ArrayList<Integer> arr){
  if(arr.size() < 2){
    return new ArrayList<ArrayList<Integer>>(Arrays.asList(arr));
  }else{
    ArrayList<ArrayList<Integer>> permutations = new ArrayList<>();
    for(int i = 0; i < arr.size(); i++){
      if(!arr.subList(0, i).contains(arr.get(i))){
        ArrayList<Integer> remainingElems = (ArrayList<Integer>) arr.clone();
        remainingElems.remove(i);
        ArrayList<ArrayList<Integer>> remainingPermutations = getPermutations(remainingElems);
        for(ArrayList<Integer> permutation : remainingPermutations){
          permutation.add(arr.get(i));
          permutations.add(permutation);
        }
      }
    }
    return permutations;
  }
}


