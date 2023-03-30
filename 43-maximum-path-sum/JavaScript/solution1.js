// Time complexity: O(n)
// Space complexity: O(h)

class Tree {
    constructor(data, left = null, right = null) {
        this.data = data;
        this.left = left;
        this.right = right;
    }
}

function dfs(root, globalMaxSum) {
    if (root === null) {
        return -Infinity;
    } else {
        let left = dfs(root.left, globalMaxSum);
        let right = dfs(root.right, globalMaxSum);
        let maxFromTop = Math.max(
            root.data,
            root.data + left,
            root.data + right
        );
        let maxNoTop = Math.max(maxFromTop, root.data + left + right);
        globalMaxSum[0] = Math.max(globalMaxSum[0], maxNoTop);
        return maxFromTop;
    }
}

function maxPathSum(root) {
    let globalMaxSum = [-Infinity];
    dfs(root, globalMaxSum);
    return globalMaxSum[0];
}
