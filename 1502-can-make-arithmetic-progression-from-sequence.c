#先排序再检验
int cmp(const void *a, const void *b) {
    return (*(int*)a - * (int*)b);
}
bool canMakeArithmeticProgression(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), cmp);
    for(int i = 1; i < arrSize - 1; i++) {
        if(arr[i + 1] + arr[i - 1] != 2 * arr[i]) {
            return false;
        }
    }
    return true;
}
