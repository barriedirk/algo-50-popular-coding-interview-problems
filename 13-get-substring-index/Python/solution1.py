# Brute force solution:

# Time complexity: O(nm)
# Space complexity: O(1)

def substrIndex(str1, str2):
  n = len(str1)
  m = len(str2)
  for i in range(n-m+1):
    found = True
    for j in range(m):
      if str1[i+j] != str2[j]:
        found = False
        break
    if found:
      return i
  return -1


