#include <stdio.h>
#include <stdlib.h>
// Matrix addition, multiplication and transpose

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
    for(int i = 0; i < A->row; i++)
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

void displayMatrix(Matrix A)
{
    if (A.row == 0 || A.column == 0)
        return;
    for (size_t i = 0; i < A.row; i++)
    {
        for (size_t j = 0; j < A.column; j++)
        {
            printf("%3d ", A.matrix[i][j]);
        }
        putchar('\n');
    }
}

int addMatrix(Matrix A, Matrix B, Matrix *Output)
{
    if (A.row != B.row || A.column != B.column)
    {
        printf("Couldn't add: dimensions don't match!\n");
        return 0;
    }

    Output->row = A.row;
    Output->column = A.column;
    Output->matrix = createMatrix(A.row, A.column);
    for (size_t i = 0; i < A.row; i++)
    {
        for (size_t j = 0; j < A.column; j++)
        {
            Output->matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];
        }
    }
    return 1;
}

int multiplyMatrix(Matrix A, Matrix B, Matrix *Output)
{
    if (A.column != B.row)
    {
        printf("Couldn't multiply matrix: No. of columns of 1st matrix must be equal to no. of rows of the 2nd!\n");
        return 0;
    }
    if (Output == NULL)
    {
        printf("Invalid output matrix!\n");
        return 0;
    }

    Output->row = A.row;
    Output->column = B.column;

    Output->matrix = createMatrix(A.row, B.column);
    for (int i = 0; i < A.row; i++)
        for (int j = 0; j < B.column; j++)
        {
            Output->matrix[i][j] = 0;
            for (int k = 0; k < B.column; k++)
                Output->matrix[i][j] += A.matrix[i][k] * B.matrix[k][j];
        }
    return 1;
}

int transposeMatrix(Matrix *A)
{
    if (A->column == A->row)
    {
        for (int i = 0; i < A->row; i++)
            for (int j = 0; j < A->column; j++)
            {
                int temp = A->matrix[i][j];
                A->matrix[i][j] = A->matrix[j][i];
                A->matrix[j][i] = temp;
            }
        return 1;
    }
    Matrix B;
    B.row = A->column;
    B.column = A->row;
    B.matrix = createMatrix(B.row, B.column);

    for(int i = 0; i < B.row; i++)
        for(int j = 0; j < B.column; j++)
            B.matrix[i][j] = A->matrix[j][i];
    freeMatrix(A);
    *A = B;
    return 1;
}

int main()
{
    Matrix A, B, C, D;
    inputMatrix(&A);
    inputMatrix(&B);
    if (addMatrix(A, B, &C))
    {
        printf("Addition of the two matrix:\n");
        displayMatrix(C);
    }
    if (multiplyMatrix(A, B, &D))
    {
        printf("Multiplication of the two matrix:\n");
        displayMatrix(D);
    }
    inputMatrix(&C);
    transposeMatrix(&C);
    printf("\nTranspose of the matrix:\n");
    displayMatrix(C);
    return 0;
}