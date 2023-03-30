// By reversing the right half then comparing:

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

Node* reverseList(Node* head){
  Node* previous = NULL;
  Node* current = head;
  while(current){
    Node* next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  return previous;
}

bool isPalindromeList(LinkedList& list){
  Node* slow = list.head;
  Node* fast = list.head;
  while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
  }
  slow = reverseList(slow);
  Node* head = list.head;
  while(slow){
    if(slow->data != head->data) return false;
    slow = slow->next;
    head = head->next;
  }
  return true;
}


