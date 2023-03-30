# Time complexity: O(n)
# Space complexity: O(n)

def isValid(str):
  bracketsMap = {'(': ')', '{': '}',  '[': ']'}
  openingBrackets = ['(', '{', '[']
  stack = []
  for bracket in str:
    if bracket in openingBrackets:
      stack.append(bracket)
    elif len(stack) > 0 and bracket == bracketsMap[stack[-1]]:
      stack.pop()
    else:
      return False
  return len(stack) == 0


