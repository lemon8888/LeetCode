int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes)
{
    int m=matrixSize;
    int n=matrixColSize[0];
    int **ret=(int**)malloc(sizeof(int*)*n);
    *returnColumnSizes=(int*)malloc(sizeof(int)*n);

    for(int i=0; i<n; i++)
    {
        ret[i]=(int*)malloc(sizeof(int*)*m);
        (*returnColumnSizes)[i]=m;
        for(int j=0; j<m; j++)
        {
            ret[i][j]=matrix[j][i];
        }
    }
    *returnSize=n;
    return ret;
}
