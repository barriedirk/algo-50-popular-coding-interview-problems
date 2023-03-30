# Time complexity: O(|V|+|E|)
# Space complexity: O(|V|)

class Graph:
  def __init__(self, adjList = {}):
    # the adjacency list is of type Dict[int,List[int]]
    self.adjList = adjList

def dfs(graph, root, visited = None):
  if visited is None:
    visited = set()
  if root in visited:
    return
  else:
    print(root)
    visited.add(root)
    for neighbour in graph.adjList[root]:
      dfs(graph, neighbour, visited)


