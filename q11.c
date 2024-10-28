#include <stdio.h>
int main()
{
    int A, B, C;
    printf("\nEnter three numbers ");
    scanf("%d%d%d", &A, &B, &C);
    A>B&&A>C?printf("%d ", A):(B>C?printf("%d ", B):printf("%d ", C));
    printf("is the largest!\n");
    return 0;
}