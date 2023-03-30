// Time complexity: O(n)
// Space complexity: O(n)

bool isValid(string str){
  unordered_map<char,char> bracketsMap = {{'(', ')'}, {'{', '}'},  {'[', ']'}};
  vector<char> openingBrackets{'(', '{', '['};
  vector<int> stack;
  for(char bracket : str){
    if(find(openingBrackets.begin(), openingBrackets.end(), bracket) != openingBrackets.end())
      stack.push_back(bracket);
    else if(stack.size() > 0 && bracket == bracketsMap[stack.back()])
      stack.pop_back();
    else
      return false;
  }
  return stack.size() == 0;
}


