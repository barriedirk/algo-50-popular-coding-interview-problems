# Brute force solution:

# Time complexity: O(n³)
# Space complexity: O(n)

def withoutRepeating(str):
  visited = [False] * 128
  for ch in str:
  if visited[ord(ch)]:
    return False
  else:
    visited[ord(ch)] = True
  return True
    
def longestSubstringWithoutRepeating(str):
  maxLength = 0
  for i in range(len(str)):
    for j in range(i, len(str)):
      substr = str[i:j+1]
      if withoutRepeating(substr) and len(substr) > maxLength:
        maxLength = len(substr)
  return maxLength


