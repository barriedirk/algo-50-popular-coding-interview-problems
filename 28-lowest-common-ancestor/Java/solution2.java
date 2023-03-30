// By checking if num1 is on the left and num2 is on the right or the opposite:

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

static Tree lowestCommonAncestor(Tree root, int num1, int num2){
  if(root == null) return null;
  if(root.data == num1 || root.data == num2) return root;
  Tree leftLCA = lowestCommonAncestor(root.left, num1, num2);
  Tree rightLCA = lowestCommonAncestor(root.right, num1, num2);
  if(leftLCA != null && rightLCA != null) return root;
  return leftLCA != null ? leftLCA : rightLCA;
}


