#include <stdio.h>
// Display 10 prime numbers from 5

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
    int count, i, N = 5;
    for (i = 0; i < 10; i++)
    {
        while (1)
        {
            if (checkPrime(N))
            {
                printf("%d ", N);
                N++;
                break;
            }
            N++;
        }
    }
    return 0;
}