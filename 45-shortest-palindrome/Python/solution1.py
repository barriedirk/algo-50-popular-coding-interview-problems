# Brute force solution:

# Time complexity: O(n�)
# Space complexity: O(1)


def shortestPalindrome(str):
  mirrorLength = 0
  for i in range(len(str)+1):
    if str[:i] == str[:i][::-1]:
      mirrorLength = i
  return str[mirrorLength:][::-1] + str


