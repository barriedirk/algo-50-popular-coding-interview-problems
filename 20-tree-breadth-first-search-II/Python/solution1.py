# Time complexity: O(n)
# Space complexity: O(n)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def getValuesByLevel(root):
  output = []
  queue = [[root, 0]]
  i = 0
  while i < len(queue):
    node = queue[i][0]
    level = queue[i][1]
    i += 1
    if node is None:
      continue
    else:
      if len(output) <= level:
        output.append([])
      output[level].append(node.data)
      queue.append([node.left, level+1])
      queue.append([node.right, level+1])
  return output


