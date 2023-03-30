# Time-optimized recursive solution (memoization):

# Time complexity: O(nm)
# Space complexity: O(nm)

def lcsRec(str1, str2, i, j, memoiz):
  key = str(i) + " " + str(j)
  if memoiz.get(key) is not None:
    return memoiz[key]
  elif i == len(str1) or j == len(str2):
    return 0
  elif str1[i] == str2[j]:
    return 1 + lcsRec(str1, str2, i+1, j+1, memoiz)
  else:
    output = max(lcsRec(str1, str2, i+1, j, memoiz), lcsRec(str1, str2, i, j+1, memoiz))
    memoiz[key] = output
    return output
  
def lcs(str1, str2):
  memoiz = {}
  return lcsRec(str1, str2, 0, 0, memoiz);


