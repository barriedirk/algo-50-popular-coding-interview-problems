// By using dynamic programming:

// Time complexity: O(n*m)
// Space complexity: O(n)

static int waysToClimb(int n, Set<Integer> possibleSteps){
  int[] nbWaysArr = new int[n+1];
  nbWaysArr[0] = 1;
  for(int i = 1; i < n+1; i++){
    int nbWays = 0;
    for(Integer steps : possibleSteps)
      if((i-steps) >= 0)
        nbWays += nbWaysArr[i-steps];
    nbWaysArr[i] = nbWays;
  }
  return nbWaysArr[n];
}


