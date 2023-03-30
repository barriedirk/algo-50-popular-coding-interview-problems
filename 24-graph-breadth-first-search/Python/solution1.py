# Time complexity: O(|V|+|E|)
# Space complexity: O(|V|)


class Graph:
  def __init__(self, adjList = {}):
    # the adjacency list is of type Dict[int,List[int]]
    self.adjList = adjList

def bfs(graph, root):
  queue = [root]
  visited = {root}
  i = 0
  while i < len(queue):
    vertex = queue[i]
    i += 1
    print(vertex)
    for neighbor in graph.adjList[vertex]:
      if neighbor not in visited:
        queue.append(neighbor)
        visited.add(neighbor)


