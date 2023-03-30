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

int rec(Tree root, bool& output){
	if(root == NULL) return -1;
	int lefth = rec(root->left, output);
	int righth = rec(root->right, output);
	if(abs(lefth-righth) > 1) output = false;
	return 1 + max(lefth, righth);
}

bool isBalanced(Tree root){
	bool output = true;
	rec(root, output);
	return output;
}


