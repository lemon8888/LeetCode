int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *num = (int*)malloc(sizeof(int) * numsSize);
    int sum = 0;
    *returnSize = numsSize;
    for(int i = 0; i < numsSize; i++) {
        num[i] = sum + nums[i];
        sum = num[i];
    }
    return num;
}
