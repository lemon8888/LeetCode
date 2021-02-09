int cmp(const void *a, const void *b) {
    int *al = *(int **)a;
    int *bl = *(int **)b;
    return (bl[1] - al[1]);
}
int maximumUnits(int** boxTypes, int boxTypesSize, int* boxTypesColSize, int truckSize) {
    int sum = 0;
    int min;
    qsort(boxTypes, boxTypesSize, sizeof(int*), cmp);
    for(int i = 0; i < boxTypesSize && truckSize > 0; i++) {
        min = fmin(boxTypes[i][0], truckSize);
        truckSize -= min;
        sum += min * boxTypes[i][1];
    }
    return sum;
}
