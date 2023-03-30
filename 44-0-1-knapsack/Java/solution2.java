// By using recursion + memoization:

// Time complexity: O(n*maxWeight)
// Space complexity: O(n*maxWeight)

static int knapsack(int[] values, int[] weights, int maxWeight, int i, HashMap<String,Integer> memoiz){
  String key = i + " " + maxWeight;
  if(memoiz.containsKey(key)){
    return memoiz.get(key);
  }else if(i == values.length){
    return 0;
  }else if(weights[i] > maxWeight){
    int output = knapsack(values, weights, maxWeight, i+1, memoiz);
    memoiz.put(key, output);
    return output;
  }else{
    int output = Math.max(values[i] + knapsack(values, weights, maxWeight-weights[i], i+1, memoiz), knapsack(values, weights, maxWeight, i+1, memoiz));
    memoiz.put(key, output);
    return output;
  }
}

static int knapsack(int[] values, int[] weights, int maxWeight){
  HashMap<String,Integer> memoiz = new HashMap<>();
  return knapsack(values, weights, maxWeight, 0, memoiz);
}


