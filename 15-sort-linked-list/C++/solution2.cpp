// Merge sort

// Time complexity: O(nlogn)
// Space complexity: O(logn)

struct Node{
  int data;
  Node* next;
};

Node* newNode(int data, Node* next = NULL){
  Node* node = (Node*) malloc(sizeof(Node));
  node->data = data;
  node->next = next;
  return node;
}

struct LinkedList{
  Node* head;
};

LinkedList newLinkedList(Node* head = NULL){
  LinkedList linkedList;
  linkedList.head = head;
  return linkedList;
}

Node* mergeSortedLists(Node* head1, Node* head2){
  Node* ptr1 = head1;
  Node* ptr2 = head2;
  Node* returnedHead = NULL;
  Node* tail = NULL;
  Node* lower;
  while(ptr1 || ptr2){
    if(ptr1 && ptr2){
      if(ptr1->data < ptr2->data){
        lower = ptr1;
        ptr1 = ptr1->next;
      }else{
        lower = ptr2;
        ptr2 = ptr2->next;
      }
    }else if(ptr1){
      lower = ptr1;
      ptr1 = ptr1->next;
    }else{
      lower = ptr2;
      ptr2 = ptr2->next;
    }
    if(returnedHead == NULL){
      returnedHead = lower;
      tail = lower;
    }else{
      tail->next = lower;
      tail = tail->next;
    }
  }
  return returnedHead;
}

Node* mergeSort(Node* head){
  if(head == NULL || head->next == NULL) return head;
  Node* slow = head;
  Node* fast = head;
  while(fast->next && fast->next->next){
    slow = slow->next;
    fast = fast->next->next;
  }
  Node* headRightHalf = slow->next;
  slow->next = NULL;
  head = mergeSort(head);
  headRightHalf = mergeSort(headRightHalf);
  return mergeSortedLists(head, headRightHalf);
}

void sortList(LinkedList& list){
  list.head = mergeSort(list.head);
}


