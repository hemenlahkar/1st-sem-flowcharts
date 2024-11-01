#include<stdio.h>
int main()
{
    int S = 0, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(int i = 1; i<=N; i+=2)
        S += i;
    printf("The sum of odd natural numbers till %d is %d", N, S);
    return 0;
}