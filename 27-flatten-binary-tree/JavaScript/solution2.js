// Time complexity: O(n)
// Space complexity: O(h)

class Tree {
    constructor(data, left = null, right = null) {
        this.data = data;
        this.left = left;
        this.right = right;
    }
}

let head = null;
function flattenTree(root) {
    if (root === null) return;
    else {
        flattenTree(root.right);
        flattenTree(root.left);
        root.left = null;
        root.right = head;
        head = root;
    }
}

const left = new Tree(8, new Tree(2), new Tree(4));
const right = new Tree(3, new Tree(1), new Tree(6));
const root = new Tree(5, left, right);

// console.log(root);

flattenTree(root);
console.log(root);
