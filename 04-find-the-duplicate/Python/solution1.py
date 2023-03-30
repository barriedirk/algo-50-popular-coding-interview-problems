# Brute force solution:

# Time complexity: O(n²)
# Space complexity: O(1)

def findDuplicate(arr):
  for i in range(len(arr)):
    for j in range(i+1, len(arr)):
      if arr[i] == arr[j]:
        return arr[i]


