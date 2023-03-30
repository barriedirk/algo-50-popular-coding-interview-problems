# Time complexity: O(n)
# Space complexity: O(1)

def longestPalindrome(str):
  occurrences = [0] * 128
  for letter in str:
    occurrences[ord(letter)] += 1
  length = 0
  for occu in occurrences:
    length += occu if occu % 2 == 0 else occu - 1
  if length < len(str):
    length += 1
  return length


