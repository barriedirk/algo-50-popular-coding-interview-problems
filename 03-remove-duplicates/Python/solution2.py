# By sorting the array:

# Time complexity: O(nlogn)
# Space complexity: O(n)

def removeDuplicates(arr):
  if len(arr) == 0:
    return []
  arr.sort()
  noDuplicatesArr = [arr[0]]
  for i in range(1, len(arr)):
    if arr[i] != arr[i-1]:
      noDuplicatesArr.append(arr[i])
  return noDuplicatesArr


