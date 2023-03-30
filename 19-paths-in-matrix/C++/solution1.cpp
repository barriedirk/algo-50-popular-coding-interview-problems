// By using recursion:

// Time complexity: O(2^(n*m))
// Space complexity: O(n + m)

int paths(vector<vector<int>> matrix, int i = 0, int j = 0){
  int n = matrix.size();
  int m = matrix[0].size();
  if(i > n-1 || j > m-1 || matrix[i][j] == 1)
    return 0;
  else if(i == n-1 && j == m-1)
    return 1;
  else
    return paths(matrix, i+1, j) + paths(matrix, i, j+1);
}


