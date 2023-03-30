// Time complexity: O(n)
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

Tree head = null;
static void flattenTree(Tree root){
	if(root == null) return;
	else{
		flattenTree(root.right);
		flattenTree(root.left);
		root.left = null;
		root.right = this.head;
		this.head = root;
	}
}