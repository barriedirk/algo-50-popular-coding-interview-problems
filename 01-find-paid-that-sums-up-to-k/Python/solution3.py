# By using a dictionary:

# Time complexity: O(n)
# Space complexity: O(n)

def findPair(arr, k):
  visited = {}
  for element in arr:
    if visited.get(k-element):
      return True
    else:
      visited[element] = True
  return False


