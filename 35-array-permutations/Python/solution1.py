# By using recursion:

# Time complexity: O(n.n!)
# Space complexity: O(n.n!)


def getPermutations(arr):
    if len(arr) == 0:
        return [arr]
    else:
        permutations = []
        for i in range(len(arr)):
            if arr[i] not in arr[:i]:
                remaining = getPermutations(arr[:i]+arr[i+1:])
                for permutation in remaining:
                    permutation.append(arr[i])
                    permutations.append(permutation)
        return permutations


