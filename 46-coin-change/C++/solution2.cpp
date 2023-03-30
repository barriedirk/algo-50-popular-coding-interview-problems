// By using dynamic programming:

// Time complexity: O(nm)
// Space complexity: O(n)

int coinChange(int amount, unordered_set<int> coins){
  int nbCoinsArr[amount+1];
  for(int i = 0; i < amount+1; i++) nbCoinsArr[0] = numeric_limits<int>::max();
  nbCoinsArr[0] = 0;
  for(int i = 1; i < amount+1; i++){
    int minCoins = numeric_limits<int>::max();
    for(int coin : coins){
      if((i - coin) >= 0){
        // in C++ we need to check if nbCoinsArr[i-coin] isn't equal
        // to Integer.MAX_VALUE, to avoid overflow when we add 1
        if(nbCoinsArr[i-coin] != numeric_limits<int>::max())
          minCoins = min(minCoins, 1 + nbCoinsArr[i-coin]);
      }
    }
    nbCoinsArr[i] = minCoins;
  }
  return nbCoinsArr[amount] == numeric_limits<int>::max() ? -1 : nbCoinsArr[amount];
}


