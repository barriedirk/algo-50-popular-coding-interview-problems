# By using divide and conquer (recursively):

# Time complexity: O(logn)
# Space complexity: O(1)

def minimumRec(arr, left, right):
  if left >= right or arr[right] > arr[left]:
    return arr[left]
  mid = (left + right)//2
  if arr[mid+1] < arr[mid]:
    return arr[mid+1]
  elif arr[mid] < arr[mid-1]:
    return arr[mid]
  elif arr[mid] > arr[right]:
    return minimumRec(arr, mid+1, right)
  else:
    return minimumRec(arr, left, mid-1)

def minimum(arr):
  return minimumRec(arr, 0, len(arr)-1)


