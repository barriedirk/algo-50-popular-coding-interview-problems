// By using dynamic programming:

// Time complexity: O(nm)
// Space complexity: O(n)

static int coinChange(int amount, Set<Integer> coins){
  int[] nbCoinsArr = new int[amount+1];
  Arrays.fill(nbCoinsArr, Integer.MAX_VALUE);
  nbCoinsArr[0] = 0;
  for(int i = 1; i < amount+1; i++){
    int minCoins = Integer.MAX_VALUE;
    for(Integer coin : coins){
      if((i - coin) >= 0){
        // in Java we need to check if nbCoinsArr[i-coin] isn't equal
        // to Integer.MAX_VALUE, to avoid overflow when we add 1
        if(nbCoinsArr[i-coin] != Integer.MAX_VALUE)
          minCoins = Math.min(minCoins, 1 + nbCoinsArr[i-coin]);
      }
    }
    nbCoinsArr[i] = minCoins;
  }
  return nbCoinsArr[amount] == Integer.MAX_VALUE ? -1 : nbCoinsArr[amount];
}


