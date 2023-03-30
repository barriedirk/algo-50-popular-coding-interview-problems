class Node:
    def __init__(self, val=0, neighbors=None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


def dfs(node, node_map):
    clone = Node(node.val)
    node_map[node.val] = clone
    for neighbor in node.neighbors:
        if neighbor.val not in node_map:
            dfs(neighbor, node_map)
        clone.neighbors.append(node_map[neighbor.val])
    return clone


def clone_graph(node):
    if node is None:
        return None
    node_map = {}
    return dfs(node, node_map)
