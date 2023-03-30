# Time complexity: O(h)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def getMinNode(root):
  while root.left is not None:
    root = root.left
  return root

def deleteNodeBst(root, num):
  if root is None:
    return None
  elif num < root.data:
    root.left = deleteNodeBst(root.left, num)
  elif num > root.data:
    root.right = deleteNodeBst(root.right, num)
  else:
    if root.left is None:
      return root.right
    elif root.right is None:
      return root.left
    else:
      successor = getMinNode(root.right)
      root.data = successor.data
      root.right = deleteNodeBst(root.right, successor.data)
  return root


