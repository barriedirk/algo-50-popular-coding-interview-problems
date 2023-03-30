# By checking all pairs (brute force solution):

# Time complexity: O(n²)
# Space complexity: O(1)

def findPair(arr, k):
  for i in range(len(arr)):
    for j in range(i+1, len(arr)):
      if arr[i] + arr[j] == k:
        return True
  return False


