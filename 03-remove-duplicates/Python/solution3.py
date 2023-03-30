# By using a dictionary:

# Time complexity: O(n)
# Space complexity: O(n)

def removeDuplicates(arr):
  visited = {}
  for element in arr:
    visited[element] = True
  return list(visited.keys())


