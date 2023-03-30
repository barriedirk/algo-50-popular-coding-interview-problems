// By representing words as a graph:

// Time complexity: O(mn²)
// Space complexity: O(mn²)


static int difference(String word1, String word2){
  int counter = 0;
  for(int i = 0; i < word1.length(); i++){
    if(word1.charAt(i) != word2.charAt(i)) counter++;
  }
  return counter;
}

static int transformationSequenceLength(String beginWord, String endWord, ArrayList<String> wordList){
  if(wordList.size() == 0 || !wordList.contains(endWord)) return 0;
  HashMap<String,HashSet<String>> adjList = new HashMap<>();
  for(String word : wordList) adjList.put(word, new HashSet<>());
  for(int i = 0; i < wordList.size(); i++){
    for(int j = i+1; j < wordList.size(); j++){
      if(difference(wordList.get(i), wordList.get(j)) == 1){
        adjList.get(wordList.get(i)).add(wordList.get(j));
        adjList.get(wordList.get(j)).add(wordList.get(i));
      }
    }
  }
  Set<String> visited = new HashSet<>();
  ArrayList<Object[]> queue = new ArrayList<>();
  int i = 0;
  for(String word : wordList){
    if(difference(beginWord, word) == 1){
      queue.add(new Object[]{word, 1});
      visited.add(word);
    }
  }
  while(i < queue.size()){
    String word = (String) queue.get(i)[0];
    Integer level = (Integer) queue.get(i)[1];
    i++;
    if(word.equals(endWord)){
      return level+1;
    }else{
      for(String transformation : adjList.get(word)){
        if(!visited.contains(transformation)){
          queue.add(new Object[]{transformation, level+1});
          visited.add(transformation);
        }
      }
    }
  }
  return 0;
}


