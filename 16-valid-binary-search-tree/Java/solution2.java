// By checking if values are sorted when performing an inorder traversal:

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

static boolean isBst(Tree root){
  int[] precedent = new int[]{Integer.MIN_VALUE};
  return isBstRec(root, precedent);
}

static boolean isBstRec(Tree root, int[] precedent)){
  if(root == null) return true;
  if(!isBstRec(root.left, precedent)) return false;
  if(root.data <= precedent[0]) return false;
  else precedent[0] = root.data;
  if(!isBstRec(root.right, precedent)) return false;
  return true;
}


