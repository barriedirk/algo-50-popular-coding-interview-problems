# Bubble sort

# Time complexity: O(n²)
# Space complexity: O(1)


class Node:
  def __init__(self, data, next = None):
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self, head = None):
    self.head = head
    
def sortList(list):
  i = list.head
  while i is not None:
    j = list.head
    while j.next is not None:
      if j.data > j.next.data:
        j.data, j.next.data = j.next.data, j.data
      j = j.next
    i = i.next


