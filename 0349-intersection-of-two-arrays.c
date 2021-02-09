#先排序再双指针比较
int cmp(const void *a, const void *b) {
    return (*(int*)a - * (int*)b);
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int min = (nums1Size < nums2Size ? nums1Size : nums2Size);
    int *ret = (int*)malloc(sizeof(int) * min);
    int index1 = 0, index2 = 0;
    *returnSize = 0;
    while(index1 < nums1Size && index2 < nums2Size) {
        if(nums1[index1] == nums2[index2]) {
            if(!(*returnSize) || ret[(*returnSize) - 1] != nums1[index1]) {
                ret[(*returnSize)++] = nums1[index1];
            }
            index1++;
            index2++;
        } else if(nums1[index1] < nums2[index2]) {
            index1++;
        } else {
            index2++;
        }
    }
    return ret;
}
