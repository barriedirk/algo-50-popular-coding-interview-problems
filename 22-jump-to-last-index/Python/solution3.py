# By keeping track of the max index that we can reach:

# Time complexity: O(n)
# Space complexity: O(1)


def canJump(arr):
  n = len(arr)
  maxIndex = 0
  for i in range(n):
    if i > maxIndex:
      return False
    else:
      maxIndex = max(maxIndex, i+arr[i])
  return maxIndex >= n-1


