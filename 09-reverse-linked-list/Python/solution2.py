# By dealing with links (iteratively):

# Time complexity: O(n)
# Space complexity: O(1)

class Node:
  def __init__(self, data, next = None):
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self, head = None):
    self.head = head

def reverseList(list):
  previous = None
  current = list.head
  while current is not None:
    next = current.next
    current.next = previous
    previous = current
    current = next
  list.head = previous


