# Brute force solution:

# Time complexity: O((n+m).2^n)
# Space complexity: O(n.2^n)

def isSubsequence(str1, str2):
  ptr1 = ptr2 = 0
  while ptr1 < len(str1) and ptr2 < len(str2):
    if str1[ptr1] == str2[ptr2]:
      ptr1 += 1
      ptr2 += 1
    else:
      ptr1 += 1
  return ptr2 == len(str2)
  
def getSubsequences(str):
  subsequences = []
  def rec(str, i, subsequence):
    if i == len(str):
      subsequences.append(subsequence)
    else:
      rec(str, i+1, subsequence+str[i])
      rec(str, i+1, subsequence)
  rec(str, 0, "")
  return subsequences

def lcs(str1, str2):
  maxLength = 0
  subsequences = getSubsequences(str1)
  for subsequence in subsequences:
    if isSubsequence(str2, subsequence) and len(subsequence) > maxLength:
      maxLength = len(subsequence)
  return maxLength


