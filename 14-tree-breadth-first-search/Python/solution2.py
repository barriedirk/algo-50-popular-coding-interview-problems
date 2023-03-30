# By using a queue (recursively):

# Time complexity: O(n)
# Space complexity: O(n)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def bfsRec(root, i, queue):
  if i >= len(queue):
    return
  else:
    poppedNode = queue[i]
    if poppedNode is not None:
      print(poppedNode.data)
      queue.append(poppedNode.left)
      queue.append(poppedNode.right)
    bfsRec(root, i+1, queue)

def bfs(root):
  bfsRec(root, 0, [root])


