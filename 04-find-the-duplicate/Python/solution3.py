# By using a dictionary:

# Time complexity: O(n)
# Space complexity: O(n)

def findDuplicate(arr):
  visited = {}
  for element in arr:
    if visited.get(element):
      return element
    else:
      visited[element] = True


