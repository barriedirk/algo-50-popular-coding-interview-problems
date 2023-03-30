# By using Kadane's algorithm:

# Time complexity: O(n)
# Space complexity: O(1)

def maximumSubarray(arr):
  globalSum = float("-inf")
  localSum = 0
  for element in arr:
    localSum = max(element, localSum + element)
    globalSum = max(globalSum, localSum)
  return globalSum


