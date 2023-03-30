// Time complexity: O(nlogn)
// Space complexity: O(n)

function mergeIntervals(intervals) {
    intervals.sort((a, b) => a[0] - b[0]);
    for (let i = 0; i < intervals.length - 1; i++) {
        if (intervals[i][1] >= intervals[i + 1][0]) {
            intervals[i + 1][0] = intervals[i][0];
            intervals[i + 1][1] = Math.max(
                intervals[i][1],
                intervals[i + 1][1]
            );
            intervals[i] = [];
        }
    }
    let output = [];
    for (let interval of intervals) {
        if (interval.length != 0) output.push(interval);
    }
    return output;
}
