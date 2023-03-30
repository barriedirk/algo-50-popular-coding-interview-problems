# By using dynamic programming:

# Time complexity: O(n*m)
# Space complexity: O(n)

def waysToClimb(n, possibleSteps):
  nbWaysArr = [0] * (n+1)
  nbWaysArr[0] = 1
  for i in range(1, n+1):
    nbWays = 0
    for steps in possibleSteps:
      if (i-steps) >= 0:
        nbWays += nbWaysArr[i-steps]
    nbWaysArr[i] = nbWays
  return nbWaysArr[n]


