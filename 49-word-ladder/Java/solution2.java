// By generating common forms:

// Time complexity: O(nm²)
// Space complexity: O(nm²)


static int transformationSequenceLength(String beginWord, String endWord, ArrayList<String> wordList){
  if(wordList.size() == 0 || !wordList.contains(endWord)) return 0;
  int lenWord = wordList.get(0).length();
  HashMap<String,ArrayList<String>> forms = new HashMap<>();
  for(String word : wordList){
    for(int i = 0; i < lenWord; i++){
      String form = word.substring(0, i) + "*" + word.substring(i+1);
      if(!forms.containsKey(form)) forms.put(form, new ArrayList<String>());
      forms.get(form).add(word);
    }
  }
  Set<String> visited = new HashSet<>();
  ArrayList<Object[]> queue = new ArrayList<>();
  queue.add(new Object[]{beginWord, 0});
  int i = 0;
  while(i < queue.size()){
    String word = (String) queue.get(i)[0];
    Integer level = (Integer) queue.get(i)[1];
    i++;
    if(word.equals(endWord)){
      return level+1;
    }else{
      for(int j = 0; j < lenWord; j++){
        String form = word.substring(0, j) + "*" + word.substring(j+1);
        if(forms.containsKey(form)){
          for(String transformation : forms.get(form)){
            if(!visited.contains(transformation)){
              queue.add(new Object[]{transformation, level+1});
              visited.add(transformation);
            }
          }
        }
      }
    }
  }
  return 0;
}


