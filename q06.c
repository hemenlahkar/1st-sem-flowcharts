#include<stdio.h>
int main()
{
    int A, B;
    printf("\nEnter the two numbers: ");
    scanf("%d%d", &A, &B);
    printf("\nBefore interchange: A = %d, B = %d", A, B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("\nAfter interchange: A = %d, B = %d", A, B);
    return 0;
}