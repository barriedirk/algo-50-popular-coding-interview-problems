# By reversing the right half then comparing:

# Time complexity: O(n)
# Space complexity: O(1)

class Node:
  def __init__(self, data, next = None):
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self, head = None):
    self.head = head

def reverseList(head):
  previous = None
  current = head
  while current is not None:
    next = current.next
    current.next = previous
    previous = current
    current = next
  return previous

def isPalindromeList(list):
  slow = fast = list.head
  while fast and fast.next:
    slow = slow.next
    fast = fast.next.next
  slow = reverseList(slow)
  head = list.head
  while slow:
    if slow.data != head.data:
      return False
    slow = slow.next
    head = head.next
  return True


