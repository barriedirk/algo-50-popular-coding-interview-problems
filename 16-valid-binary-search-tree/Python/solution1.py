# By recursively checking if every node respects its own range:

# Time complexity: O(n)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def isBst(root, min = float("-inf"), max = float("inf")):
  if root is None:
    return True
  elif root.data <= min or root.data >= max:
    return False
  else:
    return isBst(root.left, min, root.data) and isBst(root.right, root.data, max)


