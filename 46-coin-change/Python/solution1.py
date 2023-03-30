# By using recursion:

# Time complexity: O(m^n)
# Space complexity: O(n)

def coinChangeRec(amount, coins):
  if amount == 0:
    return 0
  minCoins = float("inf")
  for coin in coins:
    if (amount-coin) >= 0:
      minCoins = min(minCoins, 1 + coinChangeRec(amount-coin, coins))
  return minCoins

def coinChange(amount, coins):
  minCoins = coinChangeRec(amount, coins)
  return -1 if minCoins == float("inf") else minCoins


