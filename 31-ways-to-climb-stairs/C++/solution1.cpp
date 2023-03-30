// By using recursion:

// Time complexity: O(m^n)
// Space complexity: O(n)

int waysToClimb(int n, unordered_set<int> possibleSteps){
  if(n == 0) return 1;
  int nbWays = 0;
  for(int steps : possibleSteps)
    if((n-steps) >= 0)
      nbWays += waysToClimb(n-steps, possibleSteps);
  return nbWays;
}


