// By using recursion:

// Time complexity: O(3^(n+m))
// Space complexity: O(n + m)

int minDistance(string word1, string word2, int i = 0, int j = 0){
  if(i == word1.length())
    return word2.length()-j;
  else if(j == word2.length())
    return word1.length()-i;
  else if(word1[i] == word2[j])
    return minDistance(word1, word2, i+1, j+1);
  else
    return 1 + min(minDistance(word1, word2, i+1, j), min(minDistance(word1, word2, i, j+1), minDistance(word1, word2, i+1, j+1)));
}


