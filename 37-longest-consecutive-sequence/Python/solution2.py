# By sorting the array:

# Time complexity: O(nlogn)
# Space complexity: O(1) if we are allowed to modify the input, O(n) else


def longestConsecutiveSequence(arr):
  if len(arr) < 2:
    return len(arr)
  arr.sort()
  maxLength = 1
  length = 1
  for i in range(1, len(arr)):
    if arr[i] == arr[i-1] + 1:
      length += 1
    elif arr[i] == arr[i-1]:
      pass
    else:
      length = 1
    maxLength = max(maxLength, length)
  return maxLength


