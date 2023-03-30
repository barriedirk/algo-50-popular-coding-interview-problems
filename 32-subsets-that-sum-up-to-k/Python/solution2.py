# By using recursion + memoization:

# Time complexity: O(nk)
# Space complexity: O(nk)

def subsetsThatSumUpToK(arr, k):
  def rec(arr, k, i, sum, memoiz):
    key = str(i) + " " + str(sum)
    if memoiz.get(key) is not None:
      return memoiz[key]
    elif sum == k:
      return 1
    elif sum > k or i >= len(arr):
      return 0
    else:
      nbSubsets = rec(arr, k, i+1, sum + arr[i], memoiz) + rec(arr, k, i+1, sum, memoiz)
      memoiz[key] = nbSubsets
      return nbSubsets

  return rec(arr, k, 0, 0, {})


