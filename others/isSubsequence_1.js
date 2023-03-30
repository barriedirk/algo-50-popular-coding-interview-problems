// https://www.youtube.com/watch?v=I3MsjbU7uKQ

// By using two pointers technique iteratively:
function isSubsequence(str1, str2){
  let ptr1 = ptr2 = 0;
  while(ptr1 < str1.length && ptr2 < str2.length){
    if(str1.charAt(ptr1) == str2.charAt(ptr2)){
      ptr1++;
      ptr2++;
    } else {
      ptr1++;
    }
  }
  return ptr2 == str2.length;
}

// By using two pointers technique recursively:
function isSubsequence(str1, str2, ptr1=0, ptr2=0){
  if(ptr2 == str2.length) return true;
  else if(ptr1 == str1.length) return false;
  else if(str1[ptr1] == str2[ptr2]) return isSubsequence(str1, str2, ptr1+1, ptr2+1);
  else return isSubsequence(str1, str2, ptr1+1, ptr2);
}
