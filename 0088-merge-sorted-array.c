//利用nums1多余空间，两数组从后向前排序
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p = m - 1, q = n - 1;
    for(int i = nums1Size - 1; i >= 0; i--) {
        if((p >= 0 && q >= 0 && nums1[p] > nums2[q]) || q < 0) {
            nums1[i] = nums1[p--];
        } else {
            nums1[i] = nums2[q--];
        }
    }
}
