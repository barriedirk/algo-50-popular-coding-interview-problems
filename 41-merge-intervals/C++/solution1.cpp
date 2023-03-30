// Time complexity: O(nlogn)
// Space complexity: O(n)

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals){
  sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){return a[0] < b[0];});
  for(int i = 0; i < intervals.size()-1; i++){
    if(intervals[i][1] >= intervals[i+1][0]){
      intervals[i+1][0] = intervals[i][0];
      intervals[i+1][1] = max(intervals[i][1], intervals[i+1][1]);
      intervals[i] = *new vector<int>{};
    }
  }
  vector<vector<int>> output;
  for(vector<int> interval : intervals){
    if(interval.size() != 0)
      output.push_back(interval);
  }
  return output;
}


