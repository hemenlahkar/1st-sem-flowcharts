#include<stdio.h>
#include<stdlib.h>
// Matrix addition, multiplication and transpose

typedef struct {
    int **matrix;
    int row, column;
} Matrix;

int **createMatrix(int r, int c)
{
    int **result = (int **)malloc(r * sizeof(int *));
    for(int i = 0; i < r; i++)
        result[i] = (int *)malloc(c * sizeof(int));

    return result;
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
            printf("Enter element[%d][%d]: ", i+1, j+1);
            scanf("%d", &(A->matrix[i][j]));
        }
    }
}

void displayMatrix(Matrix A)
{
    if(A.row == 0 || A.column == 0)
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


int main()
{
    Matrix A, B, C;
    inputMatrix(&A);
    inputMatrix(&B);
    if(addMatrix(A, B, &C))
        displayMatrix(C);
    return 0;
}