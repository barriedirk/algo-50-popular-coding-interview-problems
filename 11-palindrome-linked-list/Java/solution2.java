// By reversing the right half then comparing:

// Time complexity: O(n)
// Space complexity: O(1)

static class Node{
  int data;
  Node next;

  Node(int data){
    this.data = data;
    this.next = null;
  }

  Node(int data, Node next){
    this.data = data;
    this.next = next;
  }
}

static class LinkedList{
  Node head;

  LinkedList(){
    this.head = null;
  }

  LinkedList(Node head){
    this.head = head;
  }
}

static Node reverseList(Node head){
  Node previous = null;
  Node current = head;
  while(current != null){
    Node next = current.next;
    current.next = previous;
    previous = current;
    current = next;
  }
  return previous;
}

static boolean isPalindromeList(LinkedList list){
  Node slow = list.head;
  Node fast = list.head;
  while(fast != null && fast.next != null){
    slow = slow.next;
    fast = fast.next.next;
  }
  slow = reverseList(slow);
  Node head = list.head;
  while(slow != null){
    if(slow.data != head.data) return false;
    slow = slow.next;
    head = head.next;
  }
  return true;
}


