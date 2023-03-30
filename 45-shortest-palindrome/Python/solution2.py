# By using LPS array:

# Time complexity: O(n)
# Space complexity: O(n)

def getLpsArr(str):
  lpsArr = [0] * len(str)
  length = 0
  i = 1
  while i < len(str):
    if str[i] == str[length]:
      length += 1
      lpsArr[i] = length
      i += 1
    elif length > 0:
      length = lpsArr[length-1]
    else:
      lpsArr[i] = 0
      i += 1 
  return lpsArr

def shortestPalindrome(str):
  concatenation = str + "#" + str[::-1]
  lpsArr = getLpsArr(concatenation)
  mirrorLength = lpsArr[-1]
  return str[mirrorLength:][::-1] + str


