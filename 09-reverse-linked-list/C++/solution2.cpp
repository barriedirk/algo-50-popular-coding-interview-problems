// By dealing with links (iteratively):

// Time complexity: O(n)
// Space complexity: O(1)


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

void reverseList(LinkedList& list){
  Node* previous = NULL;
  Node* current = list.head;
  while(current){
    Node* next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  list.head = previous;
}


