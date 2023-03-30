# By using recursion:

# Time complexity: O(2^n)
# Space complexity: O(n)


def canJump(arr, i = 0):
  if i == len(arr)-1:
    return True
  for j in range(1, arr[i]+1):
    if canJump(arr, i+j):
      return True
  return False


