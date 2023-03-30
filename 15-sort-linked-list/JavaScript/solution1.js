// Bubble sort

// Time complexity: O(n�)
// Space complexity: O(1)

class Node {
    constructor(data, next = null) {
        this.data = data;
        this.next = next;
    }
}

class LinkedList {
    constructor(head = null) {
        this.head = head;
    }
}

function sortList(list) {
    let i = list.head;
    while (i) {
        let j = list.head;
        while (j.next) {
            if (j.data > j.next.data) {
                [j.data, j.next.data] = [j.next.data, j.data];
            }
            j = j.next;
        }
        i = i.next;
    }
}
