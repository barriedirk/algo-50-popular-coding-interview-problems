// By generating common forms:

// Time complexity: O(nm²)
// Space complexity: O(nm²)

int transformationSequenceLength(string beginWord, string endWord, vector<string> wordList){
  if(wordList.size() == 0 || find(wordList.begin(), wordList.end(), endWord) == wordList.end()) return 0;
  int lenWord = wordList[0].length();
  unordered_map<string,vector<string>> forms;
  for(string word : wordList){
    for(int i = 0; i < lenWord; i++){
      string form = word.substr(0, i) + "*" + word.substr(i+1);
      forms[form].push_back(word);
    }
  }
  unordered_set<string> visited;
  vector<pair<string,int>> queue;
  queue.push_back(make_pair(beginWord, 0));
  int i = 0;
  while(i < queue.size()){
    string word = queue[i].first;
    int level = queue[i].second;
    i++;
    if(word == endWord){
      return level+1;
    }else{
      for(int j = 0; j < lenWord; j++){
        string form = word.substr(0, j) + "*" + word.substr(j+1);
        if(forms.find(form) != forms.end()){
          for(string transformation : forms[form]){
            if(visited.find(transformation) == visited.end()){
              queue.push_back(make_pair(transformation, level+1));
              visited.insert(transformation);
            }
          }
        }
      }
    }
  }
  return 0;
}


