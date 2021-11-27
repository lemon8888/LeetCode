int diagonalSum(int** mat, int matSize, int* matColSize) {
    if(mat == NULL) {
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < matSize; i++) {
        sum += mat[i][i];
        sum += mat[i][matSize - i - 1];
    }
    return matSize % 2 == 0 ? sum : sum - mat[matSize / 2][matSize / 2];
}
