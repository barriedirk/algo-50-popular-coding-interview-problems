# By each time searching for the position of right pointer:

# Time complexity: O(n²)
# Space complexity: O(1)

class Node:
  def __init__(self, data, next = None):
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self, head = None):
    self.head = head

def isPalindromeList(list):
  length = 0
  temp = list.head
  while temp:
    length += 1
    temp = temp.next
  left = list.head
  for i in range(length//2):
    right = list.head
    for j in range(length-i-1):
      right = right.next
    if left.data != right.data:
      return False
    left = left.next
  return True


