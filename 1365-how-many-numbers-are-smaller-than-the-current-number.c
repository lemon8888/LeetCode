int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *ret = (int*)malloc(sizeof(int) * numsSize);
    int count[101] = {0};
    for(int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    for(int i = 1; i < 101; i++) {
        count[i] += count[i - 1];
    }
    for(int i = 0; i < numsSize; i++) {
        ret[i] = nums[i] == 0 ? 0 : count[nums[i] - 1];
    }
    *returnSize = numsSize;
    return ret;
}
