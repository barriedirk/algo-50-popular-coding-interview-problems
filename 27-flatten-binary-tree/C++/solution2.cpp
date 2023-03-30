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

Tree head = NULL;
void flattenTree(Tree root, Tree* head){
	if(root == NULL) return;
	else{
		flattenTree(root.right);
		flattenTree(root.left);
		root.left = NULL;
		root.right = *head;
		*head = root;
	}
}