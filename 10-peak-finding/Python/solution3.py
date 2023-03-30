# By using divide and conquer (recursively):

# Time complexity: O(logn)
# Space complexity: O(1)

def findPeakRec(arr, left, right):
  if left >= right:
    return left
  mid = (left + right)//2
  if arr[mid] < arr[mid+1]:
    return findPeakRec(arr, mid+1, right)
  else:
    return findPeakRec(arr, left, mid)

def findPeak(arr):
  return findPeakRec(arr, 0, len(arr)-1)


