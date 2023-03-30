// By using recursion:

// Time complexity: O(φ^n) (φ = golden ratio = 1.618033...)
// Space complexity: O(n)


int waysToDecode(string str, int i = 0){
  int n = str.length();
  if(n == 0 || (i < n && str.at(i) == '0'))
    return 0;
  else if(i >= n-1)
    return 1;
  else if(stoi(string(new char[2]{str.at(i), str.at(i+1)})) >= 10 && stoi(string(new char[2]{str.at(i), str.at(i+1)})) <= 26)
    return waysToDecode(str, i+1) + waysToDecode(str, i+2);
  else
    return waysToDecode(str, i+1);
}


