// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

static int knapsack(int[] values, int[] weights, int maxWeight, int i){
  if(i == values.length)
    return 0;
  else if(weights[i] > maxWeight)
    return knapsack(values, weights, maxWeight, i+1);
  else
    return Math.max(values[i] + knapsack(values, weights, maxWeight-weights[i], i+1), knapsack(values, weights, maxWeight, i+1));
}

static int knapsack(int[] values, int[] weights, int maxWeight){
  return knapsack(values, weights, maxWeight, 0);
}


