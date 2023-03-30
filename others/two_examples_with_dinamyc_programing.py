# 1st problem: Fibonacci sequence
# Solution 1: non-optimized recursive solution
# Time complexity: O(??^n)
# Space complexity: O(n)
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1)+fib(n-2)
 
# Solution 2: dynamic programming solution (memoization)
# Time complexity: O(n)
# Space complexity: O(n)
def fib(n, lookup):
    if n in lookup:
        return lookup[n]
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        lookup[n] = fib(n-1)+fib(n-2)
        return lookup[n]

# Solution 3: dynamic programming solution (tabulation)
# Time complexity: O(n)
# Space complexity: O(n)
def fib(n):
    dp = [0]*(n+1)
    dp[0] = 0
    dp[1] = 1
    for i in range(2, n+1):
        dp[i] = dp[i-1]+dp[i-2]
    return dp[n]

  
# 2nd problem: Minimum cost path in matrix
# Solution 1: non-optimized recursive solution
# Time complexity: O(2^(n+m))
# Space complexity: O(n+m)
def min_cost(mat, i=0, j=0):
    n = len(mat)
    m = len(mat[0])
    if i == n-1 and j == m-1:
        return mat[i][j]
    elif i >= n or j >= m:
        return float("inf")
    else:
        from_right = min_cost(mat, i, j+1)
        from_bottom = min_cost(mat, i+1, j)
        return mat[i][j] + min(from_right, from_bottom)

# Solution 2: dynamic programming solution (memoization)
# Time complexity: O(nm)
# Space complexity: O(nm)
def min_cost(mat, lookup, i=0, j=0):
    n = len(mat)
    m = len(mat[0])
    if (i, j) in lookup:
        return lookup[(i, j)]
    elif i == n-1 and j == m-1:
        return mat[i][j]
    elif i >= n or j >= m:
        return float("inf")
    else:
        from_right = min_cost(mat, lookup, i, j+1)
        from_bottom = min_cost(mat, lookup, i+1, j)
        lookup[(i, j)] = mat[i][j] + min(from_right, from_bottom)
        return lookup[(i, j)]

# Solution 3: dynamic programming solution (tabulation)
# Time complexity: O(nm)
# Space complexity: O(nm)
def min_cost(mat):
    n = len(mat)
    m = len(mat[0])
    dp = [[0]*m for i in range(n)]
    dp[0][0] = mat[0][0]
    for i in range(n):
        for j in range(m):
            if i != 0 or j != 0:
                from_top = dp[i-1][j] if i > 0 else float("inf")
                from_left = dp[i][j-1] if j > 0 else float("inf")
                dp[i][j] = mat[i][j] + min(from_top, from_left)
    return dp[n-1][m-1]
