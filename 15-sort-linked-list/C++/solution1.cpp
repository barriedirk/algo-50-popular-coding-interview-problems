// Bubble sort

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

void sortList(LinkedList& list){
  Node* i = list.head;
  while(i){
    Node* j = list.head;
    while(j->next){
      if(j->data > j->next->data){
        int temp = j->data;
        j->data = j->next->data;
        j->next->data = temp;
      }
      j = j->next;
    }
    i = i->next;
  }
}


