# By using recursion:

# Time complexity: O(2^n)
# Space complexity: O(n)

def subsetsThatSumUpToK(arr, k, i = 0, sum = 0):
  if sum == k:
    return 1
  elif sum > k or i >= len(arr):
    return 0
  else:
    return subsetsThatSumUpToK(arr, k, i+1, sum + arr[i]) + subsetsThatSumUpToK(arr, k, i+1, sum)


