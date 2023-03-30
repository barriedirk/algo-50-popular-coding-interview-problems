// By using recursion:

// Time complexity: O(2^(n*m))
// Space complexity: O(n + m)

static int paths(int[][] matrix, int i, int j){
  int n = matrix.length;
  int m = matrix[0].length;
  if(i > n-1 || j > m-1 || matrix[i][j] == 1)
    return 0;
  else if(i == n-1 && j == m-1)
    return 1;
  else
    return paths(matrix, i+1, j) + paths(matrix, i, j+1);
}

static int paths(int[][] matrix){
  return paths(matrix, 0, 0);
}


