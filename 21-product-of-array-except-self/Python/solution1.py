# Brute force solution:

# Time complexity: O(n²)
# Space complexity: O(n)

def productExceptSelf(arr):
  n = len(arr)
  output = []
  for i in range(n):
    product = 1
    for j in range(n):
      if i == j:
        continue
      else:
        product *= arr[j]
    output.append(product)
  return output


