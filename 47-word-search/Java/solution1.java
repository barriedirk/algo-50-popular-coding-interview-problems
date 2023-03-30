// Time complexity: O(n*m*4^w)
// Space complexity: O(w)

static boolean outOfBoard(char[][] board, int i, int j){
  int n = board.length;
  int m = board[0].length;
  return i < 0 || i >= n || j < 0 || j >= m;
}

static boolean searchWord(char[][] board, String word, int i, int j, int counter, HashSet<String> visited){
  if(counter == word.length()){
    return true;
  }else if(outOfBoard(board, i, j) || visited.contains(i+" "+j) || board[i][j] != word.charAt(counter)){
    return false;
  }else{
    visited.add(i+" "+j);
    if(searchWord(board, word, i+1, j, counter+1, visited) || searchWord(board, word, i, j+1, counter+1, visited) || searchWord(board, word, i-1, j, counter+1, visited) || searchWord(board, word, i, j-1, counter+1, visited)){
      return true;
    }else{
      visited.remove(i+" "+j);
      return false;
    }
  }
}

static boolean exist(char[][] board, String word){
  int n = board.length;
  int m = board[0].length;
  HashSet<String> = new HashSet<>();
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      if(board[i][j] == word.charAt(0))
        if(searchWord(board, word, i, j, 0, visited))
          return true;
  return false;
}


