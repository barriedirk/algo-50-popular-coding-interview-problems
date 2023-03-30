// By using recursion + memoization:

// Time complexity: O(n*maxWeight)
// Space complexity: O(n*maxWeight)

int knapsack(vector<int> values, vector<int> weights, int maxWeight, int i = 0, unordered_map<string,int> memoiz = unordered_map<string,int>()){
  string key = to_string(i) + " " + to_string(maxWeight);
  if(memoiz.find(key) != memoiz.end()){
    return memoiz[key];
  }else if(i == values.size()){
    return 0;
  }else if(weights[i] > maxWeight){
    int output = knapsack(values, weights, maxWeight, i+1, memoiz);
    memoiz[key] = output;
    return output;
  }else{
    int output = max(values[i] + knapsack(values, weights, maxWeight-weights[i], i+1, memoiz), knapsack(values, weights, maxWeight, i+1, memoiz));
    memoiz[key] = output;
    return output;
  }
}


