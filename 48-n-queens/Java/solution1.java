// Time complexity: O(n².n!)
// Space complexity: O(n²)


static boolean isNotAttacked(char[][] board, int row, int col){
  int i = row-1;
  int jLeft = col-1;
  int jRight = col+1;
  while(i >= 0){
    if(board[i][col] == 'Q' || (jLeft >= 0 && board[i][jLeft] == 'Q') || (jRight < board.length && board[i][jRight] == 'Q')){
      return false;
    }else{
      i--;
      jLeft--;
      jRight++;
    }
  }
  return true;
}

static int nQueensRec(int n, char[][] board, int row){
  if(row >= n) return 1;
  int sumWays = 0;
  for(int i = 0; i < n; i++){
    if(isNotAttacked(board, row, i)){
      board[row][i] = 'Q';
      sumWays += nQueensRec(n, board, row+1);
      board[row][i] = '.';
    }
  }
  return sumWays;
}

static int nQueens(int n){
  char[][] board = new char[n][n];
  for(char[] row : board) Arrays.fill(row, '.');
  return nQueensRec(n, board, 0);
}


