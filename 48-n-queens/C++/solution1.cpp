// Time complexity: O(n².n!)
// Space complexity: O(n²)

bool isNotAttacked(vector<vector<char>> board, int row, int col){
  int i = row-1;
  int jLeft = col-1;
  int jRight = col+1;
  while(i >= 0){
    if(board[i][col] == 'Q' || (jLeft >= 0 && board[i][jLeft] == 'Q') || (jRight < board.size() && board[i][jRight] == 'Q')){
      return false;
    }else{
      i--;
      jLeft--;
      jRight++;
    }
  }
  return true;
}

int nQueensRec(int n, vector<vector<char>> board, int row){
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

int nQueens(int n){
  vector<vector<char>> board(n, vector<char>(n, '.'));
  return nQueensRec(n, board, 0);
}


