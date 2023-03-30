// By checking if values are sorted when performing an inorder traversal:

// Time complexity: O(n)
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

bool isBst(Tree root){
  int precedent = numeric_limits<int>::min();
  return isBstRec(root, precedent);
}

bool isBstRec(Tree root, int& precedent)){
  if(root == NULL) return true;
  if(!isBstRec(root.left, precedent)) return false;
  if(root.data <= precedent) return false;
  else precedent = root.data;
  if(!isBstRec(root.right, precedent)) return false;
  return true;
}


