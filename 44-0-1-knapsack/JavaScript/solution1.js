// By using recursion:

// Time complexity: O(2^n)
// Space complexity: O(n)

function knapsack(values, weights, maxWeight, i = 0) {
    if (i == values.length) return 0;
    else if (weights[i] > maxWeight)
        return knapsack(values, weights, maxWeight, i + 1);
    else
        return Math.max(
            values[i] +
                knapsack(values, weights, maxWeight - weights[i], i + 1),
            knapsack(values, weights, maxWeight, i + 1)
        );
}
