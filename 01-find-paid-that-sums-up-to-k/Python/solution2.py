# By sorting the array:

# Time complexity: O(nlogn)
# Space complexity: depends on the sorting algorithm we use


def findPair(arr, k):
  arr.sort()
  left = 0
  right = len(arr)-1
  while left < right:
    if arr[left] + arr[right] == k:
      return True
    elif arr[left] + arr[right] < k:
      left += 1
    else:
      right -= 1
  return False


