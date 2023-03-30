// Time complexity: O(n)
// Space complexity: O(1)

int longestPalindrome(string str){
  int occurrences[128] = {0};
  for(char letter : str){
    occurrences[(int) letter]++;
  }
  int length = 0;
  for(int occu : occurrences){
    length += occu % 2 == 0 ? occu : occu - 1;
  }
  if(length < str.length()) length++;
  return length;
}


