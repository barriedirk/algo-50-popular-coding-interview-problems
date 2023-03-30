// By using recursion:

// Time complexity: O(m^n)
// Space complexity: O(n)

function coinChangeRec(amount, coins) {
    if (amount == 0) return 0;
    let minCoins = Infinity;
    for (let coin of coins) {
        if (amount - coin >= 0)
            minCoins = Math.min(
                minCoins,
                1 + coinChangeRec(amount - coin, coins)
            );
    }
    return minCoins;
}

function coinChange(amount, coins) {
    let minCoins = coinChangeRec(amount, coins);
    return minCoins == Infinity ? -1 : minCoins;
}
