# Brute force solution (with cumulative sum):

# Time complexity: O(n²)
# Space complexity: O(1)

def maximumSubarray(arr):
  maxSum = float("-inf")
  for i in range(len(arr)):
    cumulativeSum = 0
    for j in range(i, len(arr)):
      cumulativeSum += arr[j]
      maxSum = max(maxSum, cumulativeSum)
  return maxSum


