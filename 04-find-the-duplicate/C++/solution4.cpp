// By using Floyd's cycle detection algorithm (tortoise and hare):

// Time complexity: O(n)
// Space complexity: O(1)

int findDuplicate(vector<int> arr){
  int hare = 0, tortoise = 0;
  do{
    tortoise = arr[tortoise];
    hare = arr[arr[hare]];
  }while(tortoise != hare);
  tortoise = 0;
  while(tortoise != hare){
    tortoise = arr[tortoise];
    hare = arr[hare];
  }
  return tortoise;
}


