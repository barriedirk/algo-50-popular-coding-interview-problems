# By using dynamic programming:

# Time complexity: O(n*m)
# Space complexity: O(n*m)

def paths(matrix):
  n = len(matrix)
  m = len(matrix[0])
  dp = [([0] * m) for i in range(n)]
  dp[0][0] = 0 if (matrix[0][0] == 1) else 1
  for i in range(1, m):
    if matrix[0][i] == 1:
      dp[0][i] = 0
    else:
      dp[0][i] = dp[0][i-1]
  for i in range(1, n):
    if matrix[i][0] == 1:
      dp[i][0] = 0
    else:
      dp[i][0] = dp[i-1][0]
  for i in range(1, n):
    for j in range(1, m):
      if matrix[i][j] == 1:
        dp[i][j] = 0
      else:
        dp[i][j] = dp[i-1][j] + dp[i][j-1]
  return dp[n-1][m-1]


