// Time complexity: O(n)
// Space complexity: O(n)

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

vector<vector<int>> getValuesByLevel(Tree root){
  vector<vector<int>> output;
  vector<pair<Tree,int>> queue;
  queue.push_back(make_pair(root, 0));
  int i = 0;
  while(i < queue.size()){
    Tree node = queue[i].first;
    int level = queue[i].second;
    i++;
    if(node == NULL){
      continue;
    }else{
      if(output.size() <= level) output.push_back(*new vector<int>{});
      output[level].push_back(node->data);
      queue.push_back(make_pair(node->left, level+1));
      queue.push_back(make_pair(node->right, level+1));
    }
  }
  return output;
}


