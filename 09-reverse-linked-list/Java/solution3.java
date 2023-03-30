// By dealing with links (recursively):

// Time complexity: O(n)
// Space complexity: O(n)

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

static Node reverseNodes(Node node){
  if(node == null || node.next == null)
    return node;
  Node reversed = reverseNodes(node.next);
  node.next.next = node;
  node.next = null;
  return reversed;
}

static void reverseList(LinkedList list){
  list.head = reverseNodes(list.head);
}


