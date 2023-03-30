// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)


int knapsack(vector<int> values, vector<int> weights, int maxWeight, int i = 0){
  if(i == values.size())
    return 0;
  else if(weights[i] > maxWeight)
    return knapsack(values, weights, maxWeight, i+1);
  else
    return max(values[i] + knapsack(values, weights, maxWeight-weights[i], i+1), knapsack(values, weights, maxWeight, i+1));
}


