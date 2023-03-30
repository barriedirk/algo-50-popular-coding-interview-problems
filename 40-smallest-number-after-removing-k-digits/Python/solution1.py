# Time complexity: O(n)
# Space complexity: O(n)

def smallestAfterRemoving(num, k):
  if k == len(num):
    return "0"
  stack = []
  for digit in num:
    while len(stack) > 0 and digit < stack[-1] and k > 0:
      stack.pop()
      k -= 1
    stack.append(digit)    
  while k > 0:
    stack.pop()
    k -= 1
  stack = stack[::-1]
  while len(stack) > 0 and stack[-1] == "0":
    stack.pop()
  stack = stack[::-1]
  return "".join(stack) if len(stack) > 0 else "0"


