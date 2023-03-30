# Time complexity: O(nlogn)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right
	
def height(root):
	if root is None:
		return -1
	else:
		lefth = height(root.left)
		righth = height(root.right)
		return 1 + max(lefth, righth)

def is_balanced(root):
	if root is None:
		return True
	else: 
		lefth = height(root.left)
		righth = height(root.right)
		return abs(lefth - righth) <= 1 and is_balanced(root.left) and is_balanced(root.right)



