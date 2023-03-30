// Time complexity: O(n²)
// Space complexity: O(h)

class Tree {
    constructor(data, left = null, right = null) {
        this.data = data;
        this.left = left;
        this.right = right;
    }
}

function flattenTree(root) {
    if (root === null) return;
    else {
        flattenTree(root.left);
        flattenTree(root.right);
        let rightSubtree = root.right;
        root.right = root.left;
        root.left = null;
        let temp = root;
        while (temp.right) temp = temp.right;
        temp.right = rightSubtree;
    }
}

const left = new Tree(8, new Tree(2), new Tree(4));
const right = new Tree(3, new Tree(1), new Tree(6));
const root = new Tree(5, left, right);

// console.log(root);

flattenTree(root);
console.log(root);
