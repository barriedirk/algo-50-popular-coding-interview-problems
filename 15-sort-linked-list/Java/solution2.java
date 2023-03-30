// Merge sort

// Time complexity: O(nlogn)
// Space complexity: O(logn)

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

static Node mergeSortedLists(Node head1, Node head2){
  Node ptr1 = head1;
  Node ptr2 = head2;
  Node returnedHead = null;
  Node tail = null;
  Node lower;
  while(ptr1 != null || ptr2 != null){
    if(ptr1 != null && ptr2 != null){
      if(ptr1.data < ptr2.data){
        lower = ptr1;
        ptr1 = ptr1.next;
      }else{
        lower = ptr2;
        ptr2 = ptr2.next;
      }
    }else if(ptr1 != null){
      lower = ptr1;
      ptr1 = ptr1.next;
    }else{
      lower = ptr2;
      ptr2 = ptr2.next;
    }
    if(returnedHead == null){
      returnedHead = lower;
      tail = lower;
    }else{
      tail.next = lower;
      tail = tail.next;
    }
  }
  return returnedHead;
}

static Node mergeSort(Node head){
  if(head == null || head.next == null) return head;
  Node slow = head;
  Node fast = head;
  while(fast.next != null && fast.next.next != null){
    slow = slow.next;
    fast = fast.next.next;
  }
  Node headRightHalf = slow.next;
  slow.next = null;
  head = mergeSort(head);
  headRightHalf = mergeSort(headRightHalf);
  return mergeSortedLists(head, headRightHalf);
}

static void sortList(LinkedList list){
  list.head = mergeSort(list.head);
}


