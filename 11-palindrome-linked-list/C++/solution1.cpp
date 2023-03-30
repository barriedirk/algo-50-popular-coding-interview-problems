// By each time searching for the position of right pointer:

// Time complexity: O(n²)
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

bool isPalindromeList(LinkedList& list){
  int length = 0;
  Node* temp = list.head;
  while(temp){
    length++;
    temp = temp->next;
  }
  Node* left = list.head;
  for(int i = 0; i < length/2; i++){
    Node* right = list.head;
    for(int j = 0; j < length-i-1; j++) right = right->next;
    if(left->data != right->data) return false;
    left = left->next;
  }
  return true;
}


