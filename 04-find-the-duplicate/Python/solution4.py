# By using Floyd's cycle detection algorithm (tortoise and hare):

# Time complexity: O(n)
# Space complexity: O(1)

def findDuplicate(arr):
  tortoise = arr[0]
  hare = arr[arr[0]]
  while tortoise != hare:
    tortoise = arr[tortoise]
    hare = arr[arr[hare]]
  tortoise = 0
  while tortoise != hare:
    tortoise = arr[tortoise]
    hare = arr[hare]
  return tortoise


