# Space-optimized dynamic programming solution:

# Time complexity: O(nm)
# Space complexity: O(m)

def lcs(str1, str2):
  n = len(str1)
  m = len(str2)
  dp = [0] * (m+1)
  tempDp = [0] * (m+1)
  for i in range(1, n+1):
    for j in range(1, m+1):
      if str1[i-1] == str2[j-1]:
        tempDp[j] = 1 + dp[j-1]
      else:
        tempDp[j] = max(tempDp[j-1], dp[j])
    for j in range(1, m+1):
      dp[j] = tempDp[j]
      tempDp[j] = 0
  return dp[m]


