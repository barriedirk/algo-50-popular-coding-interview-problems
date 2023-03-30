# By using two pointers technique:

# Time complexity: O(n)
# Space complexity: O(1)

def longestSubstringWithoutRepeating(str):
  maxLength = 0
  start = 0
  indexes = [-1] * 128
  for i in range(len(str)):
    if indexes[ord(str[i])] >= start:
      start = indexes[ord(str[i])]+1
    indexes[ord(str[i])] = i
    maxLength = max(maxLength, i-start+1)
  return maxLength


