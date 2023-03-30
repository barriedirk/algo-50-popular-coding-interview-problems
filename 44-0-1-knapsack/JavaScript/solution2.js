// By using recursion + memoization:

// Time complexity: O(n*maxWeight)
// Space complexity: O(n*maxWeight)

function knapsack(values, weights, maxWeight, i = 0, memoiz = {}) {
    let key = i + ' ' + maxWeight;
    if (memoiz[key] !== undefined) {
        return memoiz[key];
    } else if (i == values.length) {
        return 0;
    } else if (weights[i] > maxWeight) {
        let output = knapsack(values, weights, maxWeight, i + 1, memoiz);
        memoiz[key] = output;
        return output;
    } else {
        let output = Math.max(
            values[i] +
                knapsack(
                    values,
                    weights,
                    maxWeight - weights[i],
                    i + 1,
                    memoiz
                ),
            knapsack(values, weights, maxWeight, i + 1, memoiz)
        );
        memoiz[key] = output;
        return output;
    }
}
