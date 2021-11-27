int dominantIndex(int* nums, int numsSize) {
    int nummax = 0, numsec = 0, numindex = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] >= nummax) {
            numsec = nummax;
            nummax = nums[i];
            numindex = i;
        } else if(nums[i] >= numsec) {
            numsec = nums[i];
        }
    }
    if(nummax >= numsec * 2) {
        return numindex;
    }
    return -1;
}
