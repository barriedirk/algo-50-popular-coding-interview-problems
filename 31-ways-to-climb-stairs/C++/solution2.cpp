// By using dynamic programming:

// Time complexity: O(n*m)
// Space complexity: O(n)

int waysToClimb(int n, unordered_set<int> possibleSteps){
  int nbWaysArr[n+1];
  nbWaysArr[0] = 1;
  for(int i = 1; i < n+1; i++){
    int nbWays = 0;
    for(int steps : possibleSteps)
      if((i-steps) >= 0)
        nbWays += nbWaysArr[i-steps];
    nbWaysArr[i] = nbWays;
  }
  return nbWaysArr[n];
}


