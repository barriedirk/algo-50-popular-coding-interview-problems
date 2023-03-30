// By using dynamic programming:

// Time complexity: O(n)
// Space complexity: O(1)


static int waysToDecode(String str){
  int n = str.length();
  if(n == 0 || str.charAt(0) == '0') return 0;
  int beforePrevious = 1;
  int previous = 1;
  for(int i = 1; i < n; i++){
    int current = 0;
    if(str.charAt(i) != '0')
      current += previous;
    if(Integer.parseInt("" + str.charAt(i-1) + str.charAt(i)) >= 10 &&  Integer.parseInt("" + str.charAt(i-1) + str.charAt(i)) <= 26)
      current += beforePrevious;
    beforePrevious = previous;
    previous = current;
  }
  return previous;
}


