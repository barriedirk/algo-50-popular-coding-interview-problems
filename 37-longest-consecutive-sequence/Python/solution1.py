# Brute force solution:

# Time complexity: O(n³)
# Space complexity: O(1)

def longestConsecutiveSequence(arr):
  if len(arr) < 2:
    return len(arr)
  maxLength = 1
  for element in arr:
    left = element
    while left-1 in arr:
      left -= 1
    right = element
    while right+1 in arr:
      right += 1
    maxLength = max(maxLength, right-left+1)
  return maxLength


