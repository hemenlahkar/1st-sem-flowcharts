#include <stdio.h>
#include <stdlib.h>
// Check magic matrix

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

void displayMatrix(Matrix A)
{
    for (int i = 0; i < A.row; i++)
    {
        for (int j = 0; j < A.column; j++)
            printf("%2d ", A.matrix[i][j]);
        putchar('\n');
    }
}

int checkMagicMatrix(Matrix A)
{
    if (A.row != A.column || !A.row || !A.column)
        return 0;
    int row_sum, col_sum, magic_sum, diag1, diag2;
    magic_sum = A.row * (A.row * A.row + 1) / 2;
    diag1 = diag2 = row_sum = col_sum = 0;
    int *seen = (int *)calloc(A.row * A.column + 1, sizeof(int));
    if (!seen)
        return -1;

    for (int i = 0; i < A.row; i++)
    {
        row_sum = col_sum = 0;
        for (int j = 0; j < A.column; j++)
        {
            int num = A.matrix[i][j];
            if(num < 1 || num > A.row * A.column || seen[num])
            {
                free(seen);
                return 0;
            }
            seen[num] = 1;
            row_sum += num;
            col_sum += A.matrix[j][i];
        }
        if(row_sum != magic_sum || col_sum != magic_sum)
        {
            free(seen);
            return 0;
        }
        diag1 += A.matrix[i][i];
        diag2 += A.matrix[i][A.column - 1 - i];
    }

    free(seen);
    return (diag1 == magic_sum && diag2 == magic_sum);
}

int main()
{
    Matrix A;
    inputMatrix(&A);
    printf("The given matrix,\n");
    displayMatrix(A);
    printf("is%sa Magic Matrix\n", (checkMagicMatrix(A)>0)?" ":" NOT ");
    return 0;
}