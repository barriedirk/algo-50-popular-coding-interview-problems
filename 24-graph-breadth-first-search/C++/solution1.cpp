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

void bfs(Graph graph, int root){
  vector<int> queue;
  queue.push_back(root);
  unordered_set<int> visited;
  visited.insert(root);
  int i = 0;
  while(i < queue.size()){
    int vertex = queue[i++];
    cout << vertex << endl;
    for(int neighbor : graph.adjList[vertex]){
      if(visited.find(neighbor) == visited.end()){
        queue.push_back(neighbor);
        visited.insert(neighbor);
      }
    }
  }
}


