// By using recursion:

// Time complexity: O(3^(n+m))
// Space complexity: O(n + m)

static int minDistance(String word1, String word2, int i, int j){
  if(i == word1.length())
    return word2.length()-j;
  else if(j == word2.length())
    return word1.length()-i;
  else if(word1.charAt(i) == word2.charAt(j))
    return minDistance(word1, word2, i+1, j+1);
  else
    return 1 + Math.min(minDistance(word1, word2, i+1, j), Math.min(minDistance(word1, word2, i, j+1), minDistance(word1, word2, i+1, j+1)));
}

static int minDistance(String word1, String word2){
  return minDistance(word1, word2, 0, 0);
}


