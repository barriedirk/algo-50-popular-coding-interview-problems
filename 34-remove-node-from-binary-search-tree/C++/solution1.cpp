// Time complexity: O(h)
// Space complexity: O(h)

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

Tree getMinNode(Tree root){
  while(root->left != NULL) root = root->left;
  return root;
}

Tree deleteNodeBst(Tree root, int num){
  if(root == NULL){
    return NULL;
  }else if(num < root->data){
    root->left = deleteNodeBst(root->left, num);
  }else if(num > root->data){
    root->right = deleteNodeBst(root->right, num);
  }else{
    if(root->left == NULL){
      return root->right;
    }else if(root->right == NULL) {
      return root->left;
    }else{
      Tree successor = getMinNode(root->right);
      root->data = successor->data;
      root->right = deleteNodeBst(root->right, successor->data);
    }
  }
  return root;
}


