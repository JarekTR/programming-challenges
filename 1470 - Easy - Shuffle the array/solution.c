int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *r = (int *) malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i += 2) {
        r[i] = nums[i/2];
        r[i + 1] = nums[n + i/2];
    }
    return r;
}
