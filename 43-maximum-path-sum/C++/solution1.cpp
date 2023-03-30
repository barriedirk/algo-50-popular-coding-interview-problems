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

int dfs(Tree root, int& globalMaxSum){
  if(root == NULL){
    return numeric_limits<int>::min();
  }else{
    int left = dfs(root->left, globalMaxSum);
    int right = dfs(root->right, globalMaxSum);
    if(left == numeric_limits<int>::min()) left = 0;   // to avoid overflow when adding it to root->data
    if(right == numeric_limits<int>::min()) right = 0; // to avoid overflow when adding it to root->data
    int maxFromTop = max(root->data, max(root->data+left, root->data+right));
    int maxNoTop = max(maxFromTop, root->data+left+right);
    globalMaxSum = max(globalMaxSum, maxNoTop);
    return maxFromTop;
  }
}

int maxPathSum(Tree root){
  int globalMaxSum = numeric_limits<int>::min();
  dfs(root, globalMaxSum);
  return globalMaxSum;
}


