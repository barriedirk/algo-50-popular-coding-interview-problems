# By representing words as a graph:

# Time complexity: O(mn²)
# Space complexity: O(mn²)

def difference(word1, word2):
  counter = 0
  for i in range(len(word1)):
    if word1[i] != word2[i]:
      counter += 1
  return counter
    
def transformationSequenceLength(beginWord, endWord, wordList):
  if len(wordList) == 0 or endWord not in wordList:
    return 0
  adjList = {}
  for word in wordList:
    adjList[word] = set()
  for i in range(len(wordList)):
    for j in range(i+1, len(wordList)):
      if(difference(wordList[i], wordList[j]) == 1):
        adjList[wordList[i]].add(wordList[j])
        adjList[wordList[j]].add(wordList[i])
  visited = set()
  queue = []
  i = 0
  for word in wordList:
    if difference(beginWord, word) == 1:
      queue.append([word, 1])
      visited.add(word)
  while i < len(queue):
    word = queue[i][0]
    level = queue[i][1]
    i += 1
    if word == endWord:
      return level+1
    else:
      for transformation in adjList[word]:
        if transformation not in visited:
          queue.append([transformation, level+1])
          visited.add(transformation)
  return 0


