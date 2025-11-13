#include <stdio.h>
#include <stdlib.h>
// Check unit matrix

typedef struct
{
    int **matrix;
    int row, column;
} Matrix;

int **createMatrix(int r, int c)
{
    int **result = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        result[i] = (int *)malloc(c * sizeof(int));

    return result;
}

void freeMatrix(Matrix *A)
{
    for (int i = 0; i < A->row; i++)
        free(A->matrix[i]);
    free(A->matrix);
}

void inputMatrix(Matrix *A)
{
    int r, c;
    printf("\nEnter the dimension of the matrix in the format mxn(eg: 2x3): ");
    scanf("%dx%d", &r, &c);
    A->column = c;
    A->row = r;
    A->matrix = createMatrix(r, c);

    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            fflush(stdin);
            printf("Enter element[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &(A->matrix[i][j]));
        }
    }
}

int checkUnitMatrix(Matrix A)
{
    if (A.matrix == NULL)
        return 0;
    if(A.row != A.column) return 0;
    for (int i = 0; i < A.row; i++)
    {
        if(A.matrix[i][i] != 1) return 0;
        for (int j = 0; j < A.column; j++)
        {
            if(i == j) continue;
            if(A.matrix[i][j] != 0) return 0;
        }
    }
    return 1;
}

int main()
{
    Matrix A;
    inputMatrix(&A);
    
    if (checkUnitMatrix(A))
        printf("Given matrix is a unit matrix.\n");
    else
        printf("Given matrix is not a unit matrix!\n");
    return 0;
}