# By using recursion + memoization:

# Time complexity: O(n*maxWeight)
# Space complexity: O(n*maxWeight)


def knapsack(values, weights, maxWeight):
  def rec(values, weights, maxWeight, i, memoiz):
    key = str(i) + " " + str(maxWeight)
    if memoiz.get(key) is not None:
      return memoiz[key]
    elif i == len(values):
      return 0
    elif weights[i] > maxWeight:
      output = rec(values, weights, maxWeight, i+1, memoiz)
      memoiz[key] = output
      return output
    else:
      output = max(values[i] + rec(values, weights, maxWeight-weights[i], i+1, memoiz), rec(values, weights, maxWeight, i+1, memoiz))
      memoiz[key] = output
      return output
  return rec(values, weights, maxWeight, 0, {})


