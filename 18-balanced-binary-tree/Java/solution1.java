// Time complexity: O(nlogn)
// Space complexity: O(h)

static class Tree{
  int data;
  Tree left;
  Tree right;
  
  Tree(int data){
    this.data = data;
    this.left = null;
    this.right = null;
  }
  
  Tree(int data, Tree left, Tree right){
      this.data = data;
      this.left = left;
      this.right = right;
  }
}

static int height(Tree root){
	if(root == null) return -1;
	int lefth = height(root.left);
	int right = height(root.right);
	return 1 + Math.max(lefth, righth);
}

static boolean isBalanced(Tree root){
	if(root == null) return true;
	int leftHeight = height(root.left);
	int rightHeight = height(root.right);
	return Math.abs(leftHeight-rightHeight) <= 1 && isBalanced(root.left) && isBalanced(root.right);
}


