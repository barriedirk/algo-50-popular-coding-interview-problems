// Time complexity: O(n)
// Space complexity: O(n)

static boolean isValid(String str){
  HashMap<Character,Character> bracketsMap = new HashMap<>();
  bracketsMap.put('(', ')');
  bracketsMap.put('{', '}');
  bracketsMap.put('[', ']');
  List<Character> openingBrackets = Arrays.asList('(', '{', '[');
  Stack<Character> stack = new Stack<>();
  for(char bracket : str.toCharArray()){
    if(openingBrackets.contains(bracket))
      stack.push(bracket);
    else if(stack.size() > 0 && bracket == bracketsMap.get(stack.peek()))
      stack.pop();
    else
      return false;
  }
  return stack.isEmpty();
} 


