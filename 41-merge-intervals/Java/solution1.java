// Time complexity: O(nlogn)
// Space complexity: O(n)

static int[][] mergeIntervals(int[][] intervals){
  Arrays.sort(intervals, Comparator.comparingInt(x -> x[0]));
  for(int i = 0; i < intervals.length-1; i++){
    if(intervals[i][1] >= intervals[i+1][0]){
      intervals[i+1][0] = intervals[i][0];
      intervals[i+1][1] = Math.max(intervals[i][1], intervals[i+1][1]);
      intervals[i]  = new int[0];
    }
  }
  ArrayList<int[]> output = new ArrayList<>();
  for(int[] interval : intervals){
    if(interval.length != 0)
      output.add(interval);
  }
return output.toArray(new int[output.size()][2]);
}


