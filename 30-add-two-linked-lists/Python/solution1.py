# Time complexity: O(n)
# Space complexity: O(max(n,m))

class Node:
  def __init__(self, data, next = None):
    self.data = data
    self.next = next

class LinkedList:
  def __init__(self, head = None):
    self.head = head

def addTwoLinkedLists(list1, list2):
  output = LinkedList()
  ptr1 = list1.head
  ptr2 = list2.head 
  tail = None
  carry = 0
  while ptr1 or ptr2 or carry > 0:            
    digit1 = ptr1.data if ptr1 else 0
    digit2 = ptr2.data if ptr2 else 0
    nextDigit = (digit1 + digit2 + carry)%10
    carry = (digit1 + digit2 + carry)//10
    newNode = Node(nextDigit)
    if output.head is None:
      output.head = newNode
      tail = newNode
    else:
      tail.next = newNode
      tail = tail.next                   
    ptr1 = ptr1.next if ptr1 else None
    ptr2 = ptr2.next if ptr2 else None
  return output


