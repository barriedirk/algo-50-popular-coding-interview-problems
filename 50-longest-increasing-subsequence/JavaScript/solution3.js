// By using dynamic programming + binary search:

// Time complexity: O(nlogn)
// Space complexity: O(n)

function ceilIndex(arr, num) {
    let left = 0;
    let right = arr.length - 1;
    while (left < right - 1) {
        let mid = Math.floor((left + right) / 2);
        if (num == arr[mid]) return mid;
        else if (num < arr[mid]) right = mid;
        else left = mid;
    }
    return right;
}

function lis(arr) {
    if (arr.length < 2) return arr.length;
    let subsequence = [];
    subsequence.push(arr[0]);
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] <= subsequence[0]) subsequence[0] = arr[i];
        else if (arr[i] > subsequence[subsequence.length - 1])
            subsequence.push(arr[i]);
        else subsequence[ceilIndex(subsequence, arr[i])] = arr[i];
    }
    return subsequence.length;
}
