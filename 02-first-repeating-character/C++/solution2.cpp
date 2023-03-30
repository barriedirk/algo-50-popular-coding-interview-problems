// By using a dictionary:

// Time complexity: O(n)
// Space complexity: O(n)

char firstRepeatingCharacter(string str){
  unordered_map<char,bool> visited;
  for(char const& ch : str){
    if(visited.find(ch) != visited.end()) return ch;
    else visited[ch] = true;
  }
  return '\0';
}


