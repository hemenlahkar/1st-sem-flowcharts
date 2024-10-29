#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    (N%2)?printf("The number is odd"):printf("The number is even");
    return 0;
}