# By using recursion:

# Time complexity: O(2^(n*m))
# Space complexity: O(n + m)

def paths(matrix, i = 0, j = 0):
  n = len(matrix)
  m = len(matrix[0])
  if i > n-1 or j > m-1 or matrix[i][j] == 1:
    return 0
  elif i == n-1 and j == m-1:
    return 1
  else:
    return paths(matrix, i+1, j) + paths(matrix, i, j+1)


