// By using recursion:

// Time complexity: O(m^n)
// Space complexity: O(n)

static int coinChangeRec(int amount, Set<Integer> coins){
  if(amount == 0) return 0;
  int minCoins = Integer.MAX_VALUE;
  for(Integer coin : coins){
    if((amount-coin) >= 0){
      // in Java we need to check if the result returned by the recursive call
      // isn't equal to Integer.MAX_VALUE, to avoid overflow when we add 1
      int recursiveResult = coinChangeRec(amount-coin, coins);
      if(recursiveResult != Integer.MAX_VALUE)
        minCoins = Math.min(minCoins, 1 + recursiveResult);
    }
  }
  return minCoins;
}

static int coinChange(int amount, Set<Integer> coins){
  int minCoins = coinChangeRec(amount, coins);
  return minCoins == Integer.MAX_VALUE ? -1 : minCoins;
}


