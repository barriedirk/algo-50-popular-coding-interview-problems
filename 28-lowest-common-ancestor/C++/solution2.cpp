// By checking if num1 is on the left and num2 is on the right or the opposite:

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

Tree lowestCommonAncestor(Tree root, int num1, int num2){
  if(root == NULL) return NULL;
  if(root->data == num1 || root->data == num2) return root;
  Tree leftLCA = lowestCommonAncestor(root->left, num1, num2);
  Tree rightLCA = lowestCommonAncestor(root->right, num1, num2);
  if(leftLCA != NULL && rightLCA != NULL) return root;
  return leftLCA != NULL ? leftLCA : rightLCA;
}


