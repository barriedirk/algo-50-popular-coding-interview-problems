// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

function lis(arr, i = 0, previous = -Infinity) {
    if (i == arr.length) return 0;
    else if (arr[i] <= previous) return lis(arr, i + 1, previous);
    else
        return Math.max(1 + lis(arr, i + 1, arr[i]), lis(arr, i + 1, previous));
}
