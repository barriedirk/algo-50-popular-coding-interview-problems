// By using Kadane's algorithm:

// Time complexity: O(n)
// Space complexity: O(1)

function maximumSubarray(arr) {
    let globalSum = -Infinity;
    let localSum = 0;
    for (let element of arr) {
        localSum = Math.max(element, localSum + element);
        globalSum = Math.max(globalSum, localSum);
    }
    return globalSum;
}
