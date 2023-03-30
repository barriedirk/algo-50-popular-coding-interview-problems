# Time complexity: O(n²)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def flattenTree(root):
  if root is None:
    return
  else:
    flattenTree(root.left)
    flattenTree(root.right)
    rightSubtree = root.right
    root.right = root.left
    root.left = None
    temp = root
    while temp.right is not None:
      temp = temp.right
    temp.right = rightSubtree


