#include <stdio.h>
// Display all prime factors of a given number

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
    for (int i = 1; i < N; i++)
    {
        if (!(N % i))
            if (checkPrime(i))
                printf("%d ", i);
    }
    return 0;
}