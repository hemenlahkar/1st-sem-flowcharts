#include<stdio.h>
// Write a recursive function to generate fibonacci numbers upto a given term

int fibonacci(int n)
{
    if(n == 0 || n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printfibo(int n)
{
    for(int i = 0; i < n; i++)
        printf(" %d", fibonacci(i));
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printfibo(n);
    return 0;
}