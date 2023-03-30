// By using recursion:

// Time complexity: O(m^n)
// Space complexity: O(n)

int coinChangeRec(int amount, unordered_set<int> coins){
  if(amount == 0) return 0;
  int minCoins = numeric_limits<int>::max();
  for(int coin : coins){
    if((amount-coin) >= 0){
      // in C++ we need to check if the result returned by the recursive call
      // isn't equal to numeric_limits<int>::max(), to avoid overflow when we add 1
      int recursiveResult = coinChangeRec(amount-coin, coins);
      if(recursiveResult != numeric_limits<int>::max())
        minCoins = min(minCoins, 1 + recursiveResult);
    }
  }
  return minCoins;
}

int coinChange(int amount, unordered_set<int> coins){
  int minCoins = coinChangeRec(amount, coins);
  return minCoins == numeric_limits<int>::max() ? -1 : minCoins;
}


