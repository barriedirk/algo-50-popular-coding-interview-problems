// https://www.youtube.com/watch?v=0u-5IOhUPas

function nextGreater(num){

  // we create an array named digits to store digits of num
  let digits = num.toString().split("");

  // we create and initialize i to the before last index 
  // (because the last element has no next element
  // so digits[i+1] doesn't exist)
  let i = digits.length - 2;
  // we search for the element that breaks the ascending order
  while(i >= 0 && digits[i] >= digits[i+1]) i--;
  // if we find -1, then the next greater doesn't exist, we return num
  if(i == -1) return num;

  // we create and initialize j to the last index
  let j = digits.length - 1; 
  // we search for the first digit that is greater than digits[i]
  while(digits[j] <= digits[i]) j--;

  // we swap digits[i] with digits[j]
  [digits[i], digits[j]] = [digits[j], digits[i]];

  // we reverse the part that starts from i+1
  let left = i+1, right = digits.length - 1;
  while(left < right){
    [digits[left], digits[right]] = [digits[right], digits[left]];
    left++;
    right--;
  }

  // we return digits as an integer
  return parseInt(digits.join(""));
}
