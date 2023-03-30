// By using a queue (iteratively):

// Time complexity: O(n)
// Space complexity: O(n)

struct TreeNode{
  int data;
  TreeNode* left;
  TreeNode* right;
};

typedef TreeNode* Tree;

Tree newTree(int data, Tree left = NULL, Tree right = NULL){
  Tree tree = (Tree) malloc(sizeof(TreeNode));
  tree->data = data;
  tree->left = left;
  tree->right = right;
  return tree;
}

void bfs(Tree root){
  vector<Tree> queue;
  queue.push_back(root);
  int i = 0;
  while(i < queue.size()){
    Tree poppedNode = queue.at(i++);
    if(poppedNode == NULL) continue;
    else{
      cout << poppedNode->data << endl;
      queue.push_back(poppedNode->left);
      queue.push_back(poppedNode->right);
    }
  }
}


