# By using cumulative product:

# Time complexity: O(n)
# Space complexity: O(n)

def productExceptSelf(arr):
  n = len(arr)
  cumulativeFromLeft = [0] * n
  cumulativeFromLeft[0] = 1
  for i in range(1, n):
    cumulativeFromLeft[i] = cumulativeFromLeft[i-1] * arr[i-1]

  cumulativeFromRight = [0] * n
  cumulativeFromRight[n-1] = 1
  for i in range(n-2, -1, -1):
    cumulativeFromRight[i] = cumulativeFromRight[i+1] * arr[i+1]

  output = [0] * n
  for i in range(n):
    output[i] = cumulativeFromLeft[i] * cumulativeFromRight[i]
  
  return output


