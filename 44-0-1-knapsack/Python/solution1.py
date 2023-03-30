# By using recursion:

# Time complexity: O(2^n)
# Space complexity: O(n)

def knapsack(values, weights, maxWeight, i = 0):
  if i == len(values):
    return 0
  elif weights[i] > maxWeight:
    return knapsack(values, weights, maxWeight, i+1)
  else:
    return max(values[i] + knapsack(values, weights, maxWeight-weights[i], i+1), knapsack(values, weights, maxWeight, i+1))


