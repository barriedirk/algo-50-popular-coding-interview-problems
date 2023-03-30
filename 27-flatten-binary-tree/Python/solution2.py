# Time complexity: O(n)
# Space complexity: O(h)

head = None
def flattenTree(root):
    global head
    if root is None:
        return
    else:
        flattenTree(root.right)
        flattenTree(root.left)
        root.left = None
        root.right = head
        head = root