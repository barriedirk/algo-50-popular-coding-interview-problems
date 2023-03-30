// By using dynamic programming:

// Time complexity: O(nm)
// Space complexity: O(n)

function coinChange(amount, coins) {
    let nbCoinsArr = [...Array(amount + 1)].map((x) => Infinity);
    nbCoinsArr[0] = 0;
    for (let i = 1; i < amount + 1; i++) {
        let minCoins = Infinity;
        for (let coin of coins) {
            if (i - coin >= 0)
                minCoins = Math.min(minCoins, 1 + nbCoinsArr[i - coin]);
        }
        nbCoinsArr[i] = minCoins;
    }
    return nbCoinsArr[amount] == Infinity ? -1 : nbCoinsArr[amount];
}
