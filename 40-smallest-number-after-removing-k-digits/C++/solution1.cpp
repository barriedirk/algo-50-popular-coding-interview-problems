// Time complexity: O(n)
// Space complexity: O(n)

string smallestAfterRemoving(string num, int k) {
  if(k == num.size()) return "0";
  string stack;
  for(char digit : num){
    while(stack.size() > 0 && stack.back() > digit && k > 0){
      stack.pop_back();
      k--;
    }
    stack.push_back(digit);
  }
  while(k-- > 0) stack.pop_back();
  reverse(stack.begin(), stack.end());
  while(stack.size() > 0 && stack.back() == '0') stack.pop_back();
  reverse(stack.begin(), stack.end());
  return stack.size() > 0 ? stack : "0";
}


