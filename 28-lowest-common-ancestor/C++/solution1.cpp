// By getting paths:

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

bool getPath(Tree root, vector<Tree> &path, int num){
  if(root == NULL) return false;
  path.push_back(root);
  if(root->data == num) return true;
  if(getPath(root->left, path, num) || getPath(root->right, path, num))
    return true;
  path.pop_back();
  return false;
}

Tree lowestCommonAncestor(Tree root, int num1, int num2){
  vector<Tree> pathNum1;
  vector<Tree> pathNum2;
  if(!getPath(root, pathNum1, num1) || !getPath(root, pathNum2, num2))
    return NULL;
  int minLength = min(pathNum1.size(), pathNum2.size());
  int i = 0;
  while(i < minLength){
    if(pathNum1[i]->data == pathNum2[i]->data) i++;
    else break;
  }
  return pathNum1[i-1];
}


