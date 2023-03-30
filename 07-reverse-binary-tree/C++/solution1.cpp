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

void reverseTree(Tree root){
  if(root == NULL) return;
  Tree temp = root->left;
  root->left = root->right;
  root->right = temp;
  reverseTree(root->left);
  reverseTree(root->right);
}


