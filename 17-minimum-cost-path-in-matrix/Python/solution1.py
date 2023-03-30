# By using recursion:

# Time complexity: O(2^(n+m))
# Space complexity: O(n + m)

def minimumCostPath(matrix, i = 0, j = 0):
  n = len(matrix)
  m = len(matrix[0])
  if i == n-1 and j == m-1:
    return matrix[i][j]
  elif i == n-1:
    return matrix[i][j] + minimumCostPath(matrix, i, j+1)
  elif j == m-1:
    return matrix[i][j] + minimumCostPath(matrix, i+1, j)
  else:
    return matrix[i][j] + min(minimumCostPath(matrix, i+1, j), minimumCostPath(matrix, i, j+1))


