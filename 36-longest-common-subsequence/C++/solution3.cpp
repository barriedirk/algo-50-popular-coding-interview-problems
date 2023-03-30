// Time-optimized recursive solution (memoization):

// Time complexity: O(nm)
// Space complexity: O(nm)

int lcs(string str1, string str2, int i = 0, int j = 0, unordered_map<string,int> memoiz = unordered_map<string,int>()){
  string key = to_string(i) + " " + to_string(j);
  if(memoiz.find(key) != memoiz.end())
    return memoiz[key];
  else if(i == str1.length() || j == str2.length())
    return 0;
  else if(str1[i] == str2[j])
    return 1 + lcs(str1, str2, i+1, j+1, memoiz);
  else{
    int output = max(lcs(str1, str2, i+1, j, memoiz), lcs(str1, str2, i, j+1, memoiz));
    memoiz[key] = output;
    return output;
  }
}


