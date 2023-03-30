// Time complexity: O(n)
// Space complexity: O(h)

class Tree {
    constructor(data, left = null, right = null) {
        this.data = data;
        this.left = left;
        this.right = right;
    }
}

function reverseTree(root) {
    if (root == null) return;
    [root.left, root.right] = [root.right, root.left];
    reverseTree(root.left);
    reverseTree(root.right);
}
