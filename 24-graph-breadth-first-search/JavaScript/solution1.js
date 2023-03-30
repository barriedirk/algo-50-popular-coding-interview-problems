// Time complexity: O(|V|+|E|)
// Space complexity: O(|V|)

class Graph {
    constructor(adjList = {}) {
        // the adjacency list is of type Object<Number,Array<Number>>
        this.adjList = adjList;
    }
}

function bfs(graph, root) {
    let queue = [root];
    let visited = new Set([root]);
    let i = 0;
    while (i < queue.length) {
        let vertex = queue[i++];
        console.log(vertex);
        for (let neighbor of graph.adjList[vertex]) {
            if (!visited.has(neighbor)) {
                queue.push(neighbor);
                visited.add(neighbor);
            }
        }
    }
}
