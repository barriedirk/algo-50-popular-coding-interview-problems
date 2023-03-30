// Time complexity: O(n^2.n!)
// Space complexity: O(n^2)

function isNotAttacked(board, row, col) {
    // Time complexity: O(n)
    // Space complexity: O(1)
    let i = row - 1;
    let jLeft = col - 1;
    let jRight = col + 1;
    while (i >= 0) {
        if (
            board[i][col] == 'Q' ||
            (jLeft >= 0 && board[i][jLeft] == 'Q') ||
            (jRight < board.length && board[i][jRight] == 'Q')
        ) {
            return false;
        } else {
            i--;
            jLeft--;
            jRight++;
        }
    }
    return true;
}

function nQueensRec(n, board, row) {
    if (row >= n) return 1;
    let sumWays = 0;
    for (let i = 0; i < n; i++) {
        if (isNotAttacked(board, row, i)) {
            board[row][i] = 'Q';
            sumWays += nQueensRec(n, board, row + 1);
            board[row][i] = '.';
        }
    }
    return sumWays;
}

function nQueens(n) {
    let board = [...Array(n)].map((row) => [...Array(n)].map((cell) => '.'));
    return nQueensRec(n, board, 0);
}
