//移动快慢指针，剩下的补0（类似027）
void moveZeroes(int* nums, int numsSize) {
    int slow = 0;
    for(int fast = 0; fast < numsSize; fast++) {
        if(nums[fast] != 0) {
            nums[slow++] = nums[fast];
        }
    }
    while(slow < numsSize) {
        nums[slow++] = 0;
    }
    return nums;
}
