# Time complexity: O(n)
# Space complexity: O(h)

class Tree:
  def __init__(self, data, left = None, right = None):
    self.data = data
    self.left = left
    self.right = right
    
def rec(root, output):
	if root is None:
		return -1
	else:
		lefth = rec(root.left, output)
		righth = rec(root.right, output)
		if abs(lefth - righth) > 1:
			output[0] = False
		return 1 + max(lefth, righth)
			
def is_balanced(root):
	output = [True]
	rec(root, output)
	return output[0]



