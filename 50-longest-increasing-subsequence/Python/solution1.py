# By using recursion:

# Time complexity: O(2^n)
# Space complexity: O(n)

def lis(arr, i = 0, previous = float("-inf")):
  if i == len(arr):
    return 0
  elif arr[i] <= previous:
    return lis(arr, i+1, previous)
  else:
    return max(1 + lis(arr, i+1, arr[i]), lis(arr, i+1, previous))


