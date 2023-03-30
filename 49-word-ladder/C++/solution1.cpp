// By representing words as a graph:

// Time complexity: O(mn²)
// Space complexity: O(mn²)

int difference(string word1, string word2){
  int counter = 0;
  for(int i = 0; i < word1.length(); i++){
    if(word1[i] != word2[i]) counter++;
  }
  return counter;
}

int transformationSequenceLength(string beginWord, string endWord, vector<string> wordList){
  if(wordList.size() == 0 || find(wordList.begin(), wordList.end(), endWord) == wordList.end()) return 0;
  unordered_map<string,unordered_set<string>> adjList;
  for(int i = 0; i < wordList.size(); i++){
    for(int j = i+1; j < wordList.size(); j++){
      if(difference(wordList[i], wordList[j]) == 1){
        adjList[wordList[i]].insert(wordList[j]);
        adjList[wordList[j]].insert(wordList[i]);
      }
    }
  }
  unordered_set<string> visited;
  vector<pair<string,int>> queue;
  int i = 0;
  for(string word : wordList){
    if(difference(beginWord, word) == 1){
      queue.push_back(make_pair(word, 1));
      visited.insert(word);
    }
  }
  while(i < queue.size()){
    string word = queue[i].first;
    int level = queue[i].second;
    i++;
    if(word == endWord){
      return level+1;
    }else{
      for(string transformation : adjList[word]){
        if(visited.find(transformation) == visited.end()){
          queue.push_back(make_pair(transformation, level+1));
          visited.insert(transformation);
        }
      }
    }
  }
  return 0;
}


