// Time complexity: O(n²)
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

void flattenTree(Tree root){
  if(root == NULL) return;
  else{
    flattenTree(root->left);
    flattenTree(root->right);
    Tree rightSubtree = root->right;
    root->right = root->left;
    root->left = NULL;
    Tree temp = root;
    while(temp->right != NULL)
      temp = temp->right;
    temp->right = rightSubtree;
  }
}



