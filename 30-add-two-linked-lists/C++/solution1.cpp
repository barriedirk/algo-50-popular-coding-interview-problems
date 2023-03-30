// Time complexity: O(n)
// Space complexity: O(max(n,m))

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

LinkedList addTwoLinkedLists(LinkedList& list1, LinkedList& list2){
  LinkedList output = newLinkedList();
  Node* ptr1 = list1.head;
  Node* ptr2 = list2.head;
  Node* tail = NULL;
  int carry = 0;
  while(ptr1 || ptr2 || carry > 0){
    int digit1 = ptr1 ? ptr1->data : 0;
    int digit2 = ptr2 ? ptr2->data : 0;
    int nextDigit = (digit1 + digit2 + carry)%10;
    carry = (digit1 + digit2 + carry)/10;
    Node* newnode = newNode(nextDigit);
    if(output.head == NULL){
      output.head = newnode;
      tail = newnode;
    }else{
      tail->next = newnode;
      tail = tail->next;
    }
    ptr1 = ptr1 ? ptr1->next : NULL;
    ptr2 = ptr2 ? ptr2->next : NULL;
  }
  return output;
}


