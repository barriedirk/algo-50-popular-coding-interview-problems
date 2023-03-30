# By using dynamic programming:

# Time complexity: O(n²)
# Space complexity: O(n)

def canJump(arr):
  n = len(arr)
  dp = [False] * n
  dp[0] = True
  for i in range(n):
    if not dp[i]:
      return False
    elif i+arr[i] >= n-1:
      return True
    else: 
      for j in range(1, arr[i]+1):
        dp[i+j] = True
  return dp[n-1]


