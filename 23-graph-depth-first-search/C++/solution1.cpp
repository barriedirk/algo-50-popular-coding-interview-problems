// Time complexity: O(|V|+|E|)
// Space complexity: O(|V|)

struct Graph{
  unordered_map<int,vector<int>> adjList;
};

Graph newGraph(unordered_map<int,vector<int>> adjList = unordered_map<int,vector<int>>()){
  Graph graph;
  graph.adjList = adjList;
  return graph;
}

void dfsRec(Graph graph, int root, unordered_set<int> &visited){
  if(visited.find(root) != visited.end()) return;
  else{
    cout << root << endl;
    visited.insert(root);
    for(int neighbour : graph.adjList[root])
      dfsRec(graph, neighbour, visited);
  }
}

void dfs(Graph graph, int root){
  unordered_set<int> visited;
  dfsRec(graph, root, visited);
}


