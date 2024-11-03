#include <stdio.h>
// Calculate factorial of a given number
int fact(int n)
{
    int x, i;
    if (!n)
        return 1;
    for (x = i = 1; i <= n; i++)
        x *= i;
    return x;
}
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("The factorial of %d is %d.\n", N, fact(N));

    return 0;
}