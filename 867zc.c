#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** transpose(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize) {
    int **arr=malloc(sizeof(int*)*(*AColSizes));
    *columnSizes=malloc(sizeof(int)*ARowSize);
    *returnSize=*AColSizes;
    for(int i=0; i<*returnSize; i++)
    {
        arr[i]=malloc(sizeof(int)*(**columnSizes));
        for(int j=0; j<**columnSizes; j++)
        {
            arr[i][j] = A[j][i];
        }
    }
    return arr;
}
}
