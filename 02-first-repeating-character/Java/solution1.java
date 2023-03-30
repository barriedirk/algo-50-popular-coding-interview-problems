// Brute force solution:

// Time complexity: O(n²)
// Space complexity: O(1)


static char firstRepeatingCharacter(String str){
  for(int i = 0; i < str.length(); i++){
    for(int j = 0; j < i; j++){
      if(str.charAt(i) == str.charAt(j))
        return str.charAt(i);
    }
  }
  return '\0';
}


