# Solution 1 (Backtracking):
# Time complexity: O(n^5)
# Space complexity: O(n) (because of the call stack size)
def count(n, last=''):
    if n == 0:
        return 1
    else:
        nb = 0
        for vowel in ['a', 'e', 'i', 'o', 'u']:
            if last <= vowel:
                nb += count(n-1, vowel)
        return nb
      
# Solution 2 (Dynamic programming):
# Time complexity: O(n)
# Space complexity: O(n) (because of the dp array)
def count(n):
    NB_VOWELS = 5
    dp = [[0]*NB_VOWELS for i in range(n)]
    dp[0] = [1]*NB_VOWELS
    for i in range(1, len(dp)):
        dp[i][0] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4]
        dp[i][1] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4]
        dp[i][2] = dp[i-1][2] + dp[i-1][3] + dp[i-1][4]
        dp[i][3] = dp[i-1][3] + dp[i-1][4]
        dp[i][4] = dp[i-1][4]
    return sum(dp[-1])
  
# BONUS: Space-optimized dynamic programming solution:
# Time complexity: O(n)
# Space complexity: O(1)
# Explanation: you could notice that we were working with only 2 rows at once and not the whole array, 
# so we can just work with 2 rows of 5 elements, the extra space would be 10, which is a constant
def count(n):
    NB_VOWELS = 5
    prev = [1]*NB_VOWELS
    curr = [0]*NB_VOWELS
    for i in range(1, n):
        curr[0] = prev[0] + prev[1] + prev[2] + prev[3] + prev[4]
        curr[1] = prev[1] + prev[2] + prev[3] + prev[4]
        curr[2] = prev[2] + prev[3] + prev[4]
        curr[3] = prev[3] + prev[4]
        curr[4] = prev[4]
        for j in range(NB_VOWELS):
          prev[j] = curr[j]
    return sum(prev)
  
# Solution 3 (Math):
# Time complexity: O(1)
# Space complexity: O(1)
def count(n):
    return (n+4)*(n+3)*(n+2)*(n+1)//24