# By sorting the array:

# Time complexity: O(nlogn)
# Space complexity: depends on the sorting algorithm we use

def findDuplicate(arr):
  arr.sort()
  for i in range(1, len(arr)):
    if arr[i] == arr[i-1]:
      return arr[i]


