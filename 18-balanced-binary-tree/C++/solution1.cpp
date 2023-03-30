// Time complexity: O(nlogn)
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

int height(Tree root){
	if(root == NULL)
		return -1;
	else
		return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(Tree root){
	if(root == NULL) return true;
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	return abs(leftHeight-rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}


