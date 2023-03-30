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

static void reverseTree(Tree root){
  if(root == null) return;
  Tree temp = root.left;
  root.left = root.right;
  root.right = temp;
  reverseTree(root.left);
  reverseTree(root.right);
}


