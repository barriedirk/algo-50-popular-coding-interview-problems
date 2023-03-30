// Time complexity: O(n*m*4^w)
// Space complexity: O(w)

using namespace std;

bool outOfBoard(vector<vector<char>>& board, int i, int j){
  int n = board.size();
  int m = board[0].size();
  return i < 0 || i >= n || j < 0 || j >= m;
}

bool searchWord(vector<vector<char>>& board, string word, int i, int j, int counter, unordered_set<string>& visited){
  if(counter == word.length()){
    return true;
  }else if(outOfBoard(board, i, j) || visited.find(to_string(i)+" "+to_string(j)) != visited.end() || board[i][j] != word[counter]){
    return false;
  }else{
    visited.insert(to_string(i)+" "+to_string(j));
    if(searchWord(board, word, i+1, j, counter+1, visited) || searchWord(board, word, i, j+1, counter+1, visited) || searchWord(board, word, i-1, j, counter+1, visited) || searchWord(board, word, i, j-1, counter+1, visited)){
      return true;
    }else{
      visited.erase(to_string(i)+" "+to_string(j));
      return false;
    }
  }
}

bool exist(vector<vector<char>> board, string word){
  int n = board.size();
  int m = board[0].size();
  unordered_set<string> visited;
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) visited[i][j] = false;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      if(board[i][j] == word[0])
        if(searchWord(board, word, i, j, 0, visited))
          return true;
  return false;
}


