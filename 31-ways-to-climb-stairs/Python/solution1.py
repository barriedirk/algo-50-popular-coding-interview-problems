# By using recursion:

# Time complexity: O(m^n)
# Space complexity: O(n)

def waysToClimb(n, possibleSteps):
  if n == 0:
    return 1
  nbWays = 0
  for steps in possibleSteps:
    if (n-steps) >= 0:
      nbWays += waysToClimb(n-steps, possibleSteps)
  return nbWays


