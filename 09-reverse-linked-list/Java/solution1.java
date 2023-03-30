// By dealing with values:

// Time complexity: O(n²)
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

static void reverseList(LinkedList list){
  int length = 0;
  Node temp = list.head;
  while(temp != null){
    length++;
    temp = temp.next;
  }
  Node left = list.head;
  for(int i = 0; i < length/2; i++){
    Node right = list.head;
    for(int j = 0; j < length-i-1; j++) right = right.next;
    int tempData = left.data;
    left.data = right.data;
    right.data = tempData;
    left = left.next;
  }
}


