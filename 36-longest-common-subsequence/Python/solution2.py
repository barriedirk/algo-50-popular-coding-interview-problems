# Recursive solution:

# Time complexity: O(2^(n+m))
# Space complexity: O(n + m)

def lcs(str1, str2, i = 0, j = 0):
  if i == len(str1) or j == len(str2):
    return 0
  elif str1[i] == str2[j]:
    return 1 + lcs(str1, str2, i+1, j+1)
  else:
    return max(lcs(str1, str2, i+1, j), lcs(str1, str2, i, j+1))


