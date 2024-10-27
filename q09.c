#include<stdio.h>
// Enter a number and check whether it is greater than 10 or less than 10 or equal to 10
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("\nThe number is ");
    N>10?printf("greater than 10\n"):(N<10?printf("less than 10\n"):printf("equal to 10\n"));
    return 0;
}