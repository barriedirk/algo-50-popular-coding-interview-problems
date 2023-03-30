# By checking if num1 is on the left and num2 is on the right or the opposite:

# Time complexity: O(n)
# Space complexity: O(h)


class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def lowestCommonAncestor(root, num1, num2):
  if root is None:
    return None
  if root.data == num1 or root.data == num2:
    return root
  leftLCA = lowestCommonAncestor(root.left, num1, num2)
  rightLCA = lowestCommonAncestor(root.right, num1, num2)
  if leftLCA is not None and rightLCA is not None:
    return root
  return leftLCA if leftLCA is not None else rightLCA


