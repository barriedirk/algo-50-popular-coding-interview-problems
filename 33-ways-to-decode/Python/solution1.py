# By using recursion:

# Time complexity: O(φ^n) (φ = golden ratio = 1.618033...)
# Space complexity: O(n)

def waysToDecode(str, i = 0):
  n = len(str)
  if n == 0 or (i < n and str[i] == "0"):
    return 0
  elif i >= n-1:
    return 1
  elif "10" <= (str[i] + str[i+1]) <= "26":
    return waysToDecode(str, i+1) + waysToDecode(str, i+2)
  else:
    return waysToDecode(str, i+1)


