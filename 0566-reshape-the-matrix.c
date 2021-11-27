int** matrixReshape(int** nums, int numsSize, int* numsColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    if(r * c != numsSize * numsColSize[0]) {
        *returnSize = numsSize;
        *returnColumnSizes = numsColSize;
        return nums;
    }
    *returnSize = r;
    *returnColumnSizes = (int*)malloc(sizeof(int) * r);
    int **ret = (int**)malloc(sizeof(int*)*r);
    for(int i = 0; i < r; i++) {
        (*returnColumnSizes)[i] = c;
        ret[i] = (int*)malloc(sizeof(int) * c);
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            ret[i][j] = nums[(i * c + j) / numsColSize[0]][(i * c + j) % numsColSize[0]];
        }
    }
    return ret;
}
