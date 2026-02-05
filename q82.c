#include <stdio.h>
// Write a recursive function to calculate factorial of a number

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d! = %d", n, fact);
    return 0;
}