# Time complexity: O(n.2^n)
# Space complexity: O(n.2^n)

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


