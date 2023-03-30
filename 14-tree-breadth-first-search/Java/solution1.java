// By using a queue (iteratively):

// Time complexity: O(n)
// Space complexity: O(n)


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

static void bfs(Tree root){
  ArrayList<Tree> queue = new ArrayList<>();
  queue.add(root);
  int i = 0;
  while(i < queue.size()){
    Tree poppedNode = queue.get(i++);
    if(poppedNode == null) continue;
    else{
      System.out.println(poppedNode.data);
      queue.add(poppedNode.left);
      queue.add(poppedNode.right);
    }
  }
}


