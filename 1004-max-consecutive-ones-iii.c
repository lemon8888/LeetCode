//滑动窗口
int longestOnes(int* A, int ASize, int K) {
    int l = 0, r = 0;
    int count = 0, zero = 0;
    while(r < ASize) {
        if(A[r++] == 0) {
            zero++;
        }
        while(zero > K) {
            if(A[l] == 0) {
                zero--;
            }
            l++;
        }
        count = fmax(count, r - l);
    }
    return count;
}
