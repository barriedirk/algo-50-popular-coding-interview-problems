// Time complexity: O(|V|+|E|)
// Space complexity: O(|V|)

static class Graph{
  HashMap<Integer,ArrayList<Integer>> adjList;

  Graph(){
    this.adjList = new HashMap<>();
  }
  Graph(HashMap<Integer,ArrayList<Integer>> adjList){
    this.adjList = adjList;
  }
}

static void dfs(Graph graph, int root, Set<Integer> visited){
  if(visited.contains(root)) return;
  else{
    System.out.println(root);
    visited.add(root);
    for(int neighbour : graph.adjList.get(root))
      dfs(graph, neighbour, visited);
  }
}

static void dfs(Graph graph, int root){
  Set<Integer> visited = new HashSet<>();
  dfs(graph, root, visited);
}


