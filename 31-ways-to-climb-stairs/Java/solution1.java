// By using recursion:

// Time complexity: O(m^n)
// Space complexity: O(n)

static int waysToClimb(int n, Set<Integer> possibleSteps){
  if(n == 0) return 1;
  int nbWays = 0;
  for(Integer steps : possibleSteps)
    if((n-steps) >= 0)
      nbWays += waysToClimb(n-steps, possibleSteps);
  return nbWays;
}


