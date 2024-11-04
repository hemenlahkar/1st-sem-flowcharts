#include <stdio.h>
// Display largest and smallest factor of a number
int main()
{
    int N, smallest, largest;
    smallest = largest = 0;
    printf("Enter the number: ");
    scanf("%d", &N);

    for (int i = 2; i < N; i++)
    {
        if (!(N % i))
            smallest = i;
    }
    for (int i = N - 1; i > 1; i--)
    {
        if (!(N % i))
            largest = i;
    }
    if (!(smallest) || !(largest))
        printf("%d is a prime number\n", N);
    else
        printf("Smallest factor: %d\nLargest factor: %d", smallest, largest);
    return 0;
}