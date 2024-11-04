#include <stdio.h>
// Display all prime numbers between 1 to 20

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
    int count, i, j;
    printf("All prime numbers between 1 to 20 are: ");
    for (i = 1; i <= 20; i++)
    {
        if (checkPrime(i))
            printf("%d ", i);
    }

    return 0;
}