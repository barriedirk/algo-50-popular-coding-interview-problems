// Bubble sort

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

static void sortList(LinkedList list){
  Node i = list.head;
  while(i != null){
    Node j = list.head;
    while(j.next != null){
      if(j.data > j.next.data){
        int temp = j.data;
        j.data = j.next.data;
        j.next.data = temp;
      }
      j = j.next;
    }
    i = i.next;
  }
}


