// By using dynamic programming:

// Time complexity: O(n)
// Space complexity: O(1)

int waysToDecode(string str){
  int n = str.length();
  if(n == 0 || str.at(0) == '0') return 0;
  int beforePrevious = 1;
  int previous = 1;
  for(int i = 1; i < n; i++){
    int current = 0;
    if(str.at(i) != '0')
      current += previous;
    if(stoi(string(new char[2]{str.at(i-1), str.at(i)})) >= 10 && stoi(string(new char[2]{str.at(i-1), str.at(i)})) <= 26)
      current += beforePrevious;
    beforePrevious = previous;
    previous = current;
  }
  return previous;
}


