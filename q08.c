#include<stdio.h>
//Enter a number and check whether it is positive or negative
int main()
{
    int N;
    printf("\nEnter the number: ");
    scanf("%d", &N);
    if(N > 0)
        printf("The input number is positive");
    else if(N < 0)
        printf("The input number is negative");
    else
        printf("The input number is 0");
    return 0;
}