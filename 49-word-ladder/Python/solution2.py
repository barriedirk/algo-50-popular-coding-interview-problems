# By generating common forms:

# Time complexity: O(nm²)
# Space complexity: O(nm²)

def transformationSequenceLength(beginWord, endWord, wordList):
  if len(wordList) == 0 or endWord not in wordList:
    return 0
  lenWord = len(wordList[0])
  forms = {}
  for word in wordList:
    for i in range(lenWord):
      form = word[:i] + '*' + word[i+1:]
      if forms.get(form) is None:
        forms[form] = []
      forms[form].append(word)
  visited = set()
  queue = [[beginWord, 0]]
  i = 0
  while i < len(queue):
    word = queue[i][0]
    level = queue[i][1]
    i += 1
    if word == endWord:
      return level+1
    else:
      for j in range(lenWord):
        form = word[:j] + '*' + word[j+1:]
        if forms.get(form) is not None:
          for transformation in forms[form]:                    
            if transformation not in visited:
              queue.append([transformation, level+1])
              visited.add(transformation)
  return 0


