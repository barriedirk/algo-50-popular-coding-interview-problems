// By using a queue (recursively):

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

void bfsRec(Tree root, int i, vector<Tree> queue){
  if(i >= queue.size()) return;
  else {
    Tree poppedNode = queue.at(i);
    if(poppedNode != NULL){
      cout << poppedNode->data << endl;
      queue.push_back(poppedNode->left);
      queue.push_back(poppedNode->right);
    }
    bfsRec(root, i+1, queue);
  }
}

void bfs(Tree root){
  vector<Tree> queue{root};
  bfsRec(root, 0, queue);
}


