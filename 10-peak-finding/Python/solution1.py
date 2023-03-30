# By traversing the whole array:

# Time complexity: O(n)
# Space complexity: O(1)

def findPeak(arr):
  for i in range(len(arr)):
    if (i == 0 or arr[i] >= arr[i-1]) and (i == len(arr)-1 or arr[i] >= arr[i+1]):
      return i


