// Time complexity: O(n)
// Space complexity: O(n)

function smallestAfterRemoving(num, k) {
    if (k == num.length) return '0';
    let stack = [];
    for (let digit of num) {
        while (stack.length > 0 && digit < stack[stack.length - 1] && k > 0) {
            stack.pop();
            k--;
        }
        stack.push(digit);
    }

    // there still have number and it's because the number is sorted
    // like 12345
    while (k-- > 0) stack.pop();
	
    // to remove leading zeros like 000235
    stack = stack.reverse();
    while (stack.length > 0 && stack[stack.length - 1] == '0') stack.pop();
    stack = stack.reverse();

    return stack.length > 0 ? stack.join('') : '0';
}
