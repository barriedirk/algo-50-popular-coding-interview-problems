// By using recursion:

// Time complexity: O(2^(n+m))
// Space complexity: O(n + m)


int minimumCostPath(vector<vector<int>> matrix, int i = 0, int j = 0){
  int n = matrix.size();
  int m = matrix[0].size();
  if(i == n-1 && j == m-1)
    return matrix[i][j];
  else if(i == n-1)
    return matrix[i][j] + minimumCostPath(matrix, i, j+1);
  else if(j == m-1)
    return matrix[i][j] + minimumCostPath(matrix, i+1, j);
  else
    return matrix[i][j] + min(minimumCostPath(matrix, i+1, j), minimumCostPath(matrix, i, j+1));
}


