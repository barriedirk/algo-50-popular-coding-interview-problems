// By using divide and conquer (recursively):

// Time complexity: O(logn)
// Space complexity: O(1)

function minimumRec(arr, left = 0, right = arr.length - 1) {
    if (left >= right || arr[right] > arr[left]) return arr[left];
    let mid = Math.floor((left + right) / 2);
    if (arr[mid + 1] < arr[mid]) return arr[mid + 1];
    else if (arr[mid] < arr[mid - 1]) return arr[mid];
    else if (arr[mid] > arr[right]) return minimumRec(arr, mid + 1, right);
    else return minimumRec(arr, left, mid - 1);
}

function minimum(arr) {
    return minimumRec(arr, 0, arr.length -1);
}
