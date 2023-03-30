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

static int rec(Tree root, boolean[] output){
	if(root == null) return -1;
	int lefth = rec(root.left, output);
	int righth = rec(root.right, output);
	if(Math.abs(lefth-righth) > 1) output[0] = false;
	return 1 + Math.max(lefth, righth);
}

static boolean isBalanced(root){
	boolean[] output = {true};
	rec(root, output);
	return output[0];
}


