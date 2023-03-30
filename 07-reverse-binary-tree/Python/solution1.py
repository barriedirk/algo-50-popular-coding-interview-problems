# Time complexity: O(n)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right
    
def reverseTree(root):
  if root is None:
    return
  root.left, root.right = root.right, root.left
  reverseTree(root.left)
  reverseTree(root.right)


