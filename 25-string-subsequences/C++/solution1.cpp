// Time complexity: O(n.2^n)
// Space complexity: O(n.2^n)

void getSubsequencesRec(string str, int i, string subsequence, vector<string> &subsequences){
  if(i == str.size()){
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


