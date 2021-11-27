bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i = 0; i < matrixSize - 1; i++) {
        for(int j = 0; j < matrixColSize[0] - 1; j++) {
            if(matrix[i][j] != matrix[i + 1][j + 1]) {
                return false;
            }
        }
    }
    return true;
}
