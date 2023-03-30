# By using dynamic programming + binary search:

# Time complexity: O(nlogn)
# Space complexity: O(n)

def ceilIndex(arr, num):
  left = 0
  right = len(arr)-1
  while left < right-1:
    mid = (left+right)//2
    if num == arr[mid]:
      return mid
    elif num < arr[mid]:
      right = mid
    else:
      left = mid
  return right

def lis(arr):
  if len(arr) < 2:
    return len(arr)
  subsequence = []
  subsequence.append(arr[0])
  for i in range(1, len(arr)):
    if arr[i] <= subsequence[0]:
      subsequence[0] = arr[i]
    elif arr[i] > subsequence[-1]:
      subsequence.append(arr[i])
    else:
      subsequence[ceilIndex(subsequence, arr[i])] = arr[i]
  return len(subsequence)


