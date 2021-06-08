int* runningSum(int* nums, int numsSize, int* returnSize) {
  int runSum = 0;
  *returnSize = numsSize;
  int* returnArrary = (int*)malloc(sizeof(int) * numsSize);
  for (int i = 0; i < numsSize; i++) {
    runSum += nums[i];
    returnArrary[i] = runSum;
  }
  return returnArrary;
}