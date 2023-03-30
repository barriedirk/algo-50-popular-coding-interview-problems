# By dealing with links (recursively):

# Time complexity: O(n)
# Space complexity: O(n)

class Node:
  def __init__(self, data, next = None):
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self, head = None):
    self.head = head

def reverseNodes(node):
  if node is None or node.next is None:
    return node
  reversed = reverseNodes(node.next)
  node.next.next = node
  node.next = None
  return reversed

def reverseList(list):
  list.head = reverseNodes(list.head)


