// Time complexity: O(n)
// Space complexity: O(n)

function insertInterval(intervals, newInterval) {
    let output = [];
    let i = 0;
    while (i < intervals.length && intervals[i][1] < newInterval[0]) {
        output.push(intervals[i++]);
    }
    while (i < intervals.length && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = Math.min(newInterval[0], intervals[i][0]);
        newInterval[1] = Math.max(newInterval[1], intervals[i][1]);
        i++;
    }
    output.push(newInterval);
    while (i < intervals.length) {
        output.push(intervals[i++]);
    }
    return output;
}
