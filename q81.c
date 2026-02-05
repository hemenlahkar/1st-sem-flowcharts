#include<stdio.h>

int getNSum(int n)
{
    if (n == 1) return 1;
    return n + getNSum(n - 1);
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int sum = getNSum(n);
    printf("Result = %d\n", sum);
    return 0;
}