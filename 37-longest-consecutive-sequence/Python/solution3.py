# Optimized brute force solution:

# Time complexity: O(n)
# Space complexity: O(n)

def longestConsecutiveSequence(arr):
  if len(arr) < 2:
    return len(arr)
  maxLength = 1
  values = set(arr)
  for element in values:
    if element-1 in values:
      continue
    else:
      right = element
      while right+1 in values:
        right += 1
      maxLength = max(maxLength, right-element+1)
  return maxLength


