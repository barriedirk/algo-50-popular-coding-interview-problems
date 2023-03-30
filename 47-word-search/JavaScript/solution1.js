// Time complexity: O(n*m*4^w)
// Space complexity: O(w)

function outOfBoard(board, i, j) {
    let n = board.length;
    let m = board[0].length;
    return i < 0 || i >= n || j < 0 || j >= m;
}

function searchWord(board, word, i, j, counter, visited) {
    if (counter == word.length) {
        return true;
    } else if (
        outOfBoard(board, i, j) ||
        visited.has(i + ' ' + j) ||
        board[i][j] != word[counter]
    ) {
        return false;
    } else {
        visited.add(i + ' ' + j);
        if (
            searchWord(board, word, i + 1, j, counter + 1, visited) ||
            searchWord(board, word, i, j + 1, counter + 1, visited) ||
            searchWord(board, word, i - 1, j, counter + 1, visited) ||
            searchWord(board, word, i, j - 1, counter + 1, visited)
        ) {
            return true;
        } else {
            visited.delete(i + ' ' + j);
            return false;
        }
    }
}

function exist(board, word) {
    let n = board.length;
    let m = board[0].length;
    let visited = new Set();
    for (let i = 0; i < n; i++)
        for (let j = 0; j < m; j++)
            if (board[i][j] == word[0])
                if (searchWord(board, word, i, j, 0, visited)) return true;
    return false;
}
