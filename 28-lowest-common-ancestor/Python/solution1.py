# By getting paths:

# Time complexity: O(n)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def getPath(root, path, num):
  if root is None:
    return False
  path.append(root)
  if root.data == num:
    return True
  if getPath(root.left, path, num) or getPath(root.right, path, num):
    return True
  path.pop()
  return False

def lowestCommonAncestor(root, num1, num2):
  pathNum1 = []
  pathNum2 = []
  if not getPath(root, pathNum1, num1) or not getPath(root, pathNum2, num2):
    return None
  minLength = min(len(pathNum1), len(pathNum2))
  i = 0
  while i < minLength:
    if pathNum1[i].data == pathNum2[i].data: i += 1
    else: break
  return pathNum1[i-1]


