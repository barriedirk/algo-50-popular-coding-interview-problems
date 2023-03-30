// By using LPS array:

// Time complexity: O(n)
// Space complexity: O(n)

function getLpsArr(str) {
    let lpsArr = [...Array(str.length)].map((x) => 0);
    let length = 0;
    let i = 1;
    while (i < str.length) {
        if (str[i] == str[length]) lpsArr[i++] = ++length;
        else if (length > 0) length = lpsArr[length - 1];
        else lpsArr[i++] = 0;
    }
    return lpsArr;
}

function shortestPalindrome(str) {
    let concatenation = str + '#' + str.split('').reverse().join('');
    let lpsArr = getLpsArr(concatenation);
    let mirrorLength = lpsArr[lpsArr.length - 1];
    return str.substring(mirrorLength).split('').reverse().join('') + str;
}
