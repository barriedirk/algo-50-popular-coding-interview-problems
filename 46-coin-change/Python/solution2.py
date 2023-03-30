# By using dynamic programming:

# Time complexity: O(nm)
# Space complexity: O(n)

def coinChange(amount, coins):
  nbCoinsArr = [float("inf")] * (amount+1)
  nbCoinsArr[0] = 0
  for i in range(1, amount+1):
    minCoins = float("inf")
    for coin in coins:
      if (i - coin) >= 0:
        minCoins = min(minCoins, 1 + nbCoinsArr[i-coin])
    nbCoinsArr[i] = minCoins
  return -1 if nbCoinsArr[amount] == float("inf") else nbCoinsArr[amount]


