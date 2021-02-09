#先排序再选边
int cmp(const void *a, const void *b) {
    return (*(int*)a - * (int*)b);
}
int largestPerimeter(int* A, int ASize) {
    qsort(A, ASize, sizeof(int), cmp);
    for(int i = ASize - 1; i >= 2; i--) {
        if(A[i] < A[i - 1] + A[i - 2]) {
            return A[i] + A[i - 1] + A[i - 2];
        }
    }
    return 0;
}
