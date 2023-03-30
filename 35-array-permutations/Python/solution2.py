# By always getting the next permutation:

# Time complexity: O(n.n!)
# Space complexity: O(n.n!)

def getNextGreaterPermutation(arr):
  i = len(arr) - 2
  while i >= 0 and arr[i] >= arr[i+1]:
    i -= 1
  if i == -1:
    return arr
  j = len(arr) - 1
  while arr[j] <= arr[i]:
    j -= 1
  arr[i], arr[j] = arr[j], arr[i]
  arr[i+1:] = arr[:i:-1]
  return arr

def getPermutations(arr):
  if len(arr) < 2:
    return [arr]
  arr = sorted(arr)
  permutations = [arr.copy()]
  greatestPermutation = arr[::-1]
  while arr != greatestPermutation:
    arr = getNextGreaterPermutation(arr)
    permutations.append(arr.copy()) 
  return permutations


