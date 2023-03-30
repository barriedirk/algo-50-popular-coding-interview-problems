// Time complexity: O(n)
// Space complexity: O(n)

static int[][] insertInterval(int[][] intervals, int[] newInterval){
  ArrayList<int[]> output = new ArrayList<>();
  int i = 0;
  while(i < intervals.length && intervals[i][1] < newInterval[0]){
    output.add(intervals[i++]);
  }
  while(i < intervals.length && intervals[i][0] <= newInterval[1]){
    newInterval[0] = Math.min(newInterval[0], intervals[i][0]);
    newInterval[1] = Math.max(newInterval[1], intervals[i][1]);
    i++;
  }
  output.add(newInterval);
  while(i < intervals.length){
    output.add(intervals[i++]);
  }
  return output.toArray(new int[output.size()][2]);
}


