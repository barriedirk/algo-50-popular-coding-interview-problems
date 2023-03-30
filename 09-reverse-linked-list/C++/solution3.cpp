// By dealing with links (recursively):

// Time complexity: O(n)
// Space complexity: O(n)


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

Node* reverseNodes(Node* node){
  if(node == NULL || node->next == NULL)
    return node;
  Node* reversed = reverseNodes(node->next);
  node->next->next = node;
  node->next = NULL;
  return reversed;
}

void reverseList(LinkedList& list){
  list.head = reverseNodes(list.head);
}


