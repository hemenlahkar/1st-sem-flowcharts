#include<stdio.h>
//Smaller of two numbers
int main()
{
    int A, B;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&A, &B);
    A<B?printf("\n%d is smaller", A):printf("\n%d is smaller", B);

    return 0;
}