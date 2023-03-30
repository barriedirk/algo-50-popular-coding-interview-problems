# Time complexity: O(n)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def dfsPreorder(root):
  if root is None:
    return
  print(root.data)
  dfsPreorder(root.left)
  dfsPreorder(root.right)

def dfsInorder(root):
  if root is None:
    return
  dfsInorder(root.left)
  print(root.data)
  dfsInorder(root.right)

def dfsPostorder(root):
  if root is None:
    return
  dfsPostorder(root.left)
  dfsPostorder(root.right)
  print(root.data)


