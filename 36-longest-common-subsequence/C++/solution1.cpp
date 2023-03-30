// Brute force solution:

// Time complexity: O((n+m).2^n)
// Space complexity: O(n.2^n)

bool isSubsequence(string str1, string str2){
  int ptr1 = 0, ptr2 = 0;
  while(ptr1 < str1.length() && ptr2 < str2.length()){
    if(str1[ptr1] == str2[ptr2]){
      ptr1++;
      ptr2++;
    } else {
      ptr1++;
    }
  }
  return ptr2 == str2.length();
}

void getSubsequencesRec(string str, int i, string subsequence, vector<string> &subsequences){
  if(i == str.length()){
    subsequences.push_back(subsequence);
  }else{
    getSubsequencesRec(str, i+1, subsequence+str.at(i), subsequences);
    getSubsequencesRec(str, i+1, subsequence, subsequences);
  }
}

vector<string> getSubsequences(string str){
  vector<string> subsequences;
  getSubsequencesRec(str, 0, "", subsequences);
  return subsequences;
}

int lcs(string str1, string str2){
  int maxLength = 0;
  vector<string> subsequences = getSubsequences(str1);
  for(string subsequence : subsequences){
    if(isSubsequence(str2, subsequence) && subsequence.length() > maxLength)
      maxLength = subsequence.length();
  }
  return maxLength;
}


