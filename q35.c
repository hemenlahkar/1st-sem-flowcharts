#include <stdio.h>
// Check Prime Number

int checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (!(n % i))
            count++;
    return (count == 2);
}

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("%d is%sPrime\n", N, (checkPrime(N) ? " " : " NOT "));
    return 0;
}