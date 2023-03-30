# Brute force solution:

# Time complexity: O(n³)
# Space complexity: O(1)

def maximumSubarray(arr):
  maxSum = float("-inf")
  for i in range(len(arr)):
    for j in range(i, len(arr)):
      actualSum = 0
      for k in range(i, j+1):
        actualSum += arr[k]
      maxSum = max(maxSum, actualSum)
  return maxSum


