// By recursively checking if every node respects its own range:

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

bool isBst(Tree root, int min = numeric_limits<int>::min(), int max = numeric_limits<int>::max()){
  if(root == NULL)
    return true;
  else if(root->data <= min || root->data >= max)
    return false;
  else
    return isBst(root->left, min, root->data) && isBst(root->right, root->data, max);
}


