# Time complexity: O(n)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right

def dfs(root, globalMaxSum):
  if root is None:
    return float("-inf")
  else:
    left = dfs(root.left, globalMaxSum)
    right = dfs(root.right, globalMaxSum)
    maxFromTop = max(root.data, root.data+left, root.data+right)
    maxNoTop = max(maxFromTop, root.data+left+right)
    globalMaxSum[0] = max(globalMaxSum[0], maxNoTop)
    return maxFromTop

def maxPathSum(root):
  globalMaxSum = [float("-inf")]
  dfs(root, globalMaxSum)
  return globalMaxSum[0]


