# By using recursion:

# Time complexity: O(3^(n+m))
# Space complexity: O(n + m)

def minDistance(word1, word2, i = 0, j = 0):
  if i == len(word1):
    return len(word2)-j
  elif j == len(word2):
    return len(word1)-i
  elif word1[i] == word2[j]:
    return minDistance(word1, word2, i+1, j+1)
  else:
    return 1 + min(minDistance(word1, word2, i+1, j), minDistance(word1, word2, i, j+1), minDistance(word1, word2, i+1, j+1))


