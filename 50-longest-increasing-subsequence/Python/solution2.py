# By using dynamic programming:

# Time complexity: O(n²)
# Space complexity: O(n)

def lis(arr):
  if len(arr) < 2:
    return len(arr)
  dp = [0] * len(arr)
  maxLength = 0
  for i in range(len(arr)):
    maxPreviousLength = 0
    for j in range(i):
      if arr[i] > arr[j]:
        maxPreviousLength = max(maxPreviousLength, dp[j])
    dp[i] = maxPreviousLength + 1
    maxLength = max(maxLength, dp[i])
  return maxLength


