# By checking if values are sorted when performing an inorder traversal:

# Time complexity: O(n)
# Space complexity: O(h)


class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def isBst(root):
  precedent = [float("-inf")]
  return isBstRec(root, precedent)
  
def isBstRec(root, precedent)):
  if root is None: return True
  if not isBstRec(root.left, precedent): return False
  if root.data <= precedent[0]: return False
  else: precedent[0] = root.data
  if not isBstRec(root.right, precedent): return False
  return True


