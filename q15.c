#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter the two numbers: ");
    scanf("%d %d", &A, &B);
    A%B?printf("%d is NOT divisible by %d\n", A, B):printf("%d is divisible by %d\n", A, B);
    return 0;
}