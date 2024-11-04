#include <stdio.h>
// Display all the numbers between 1 to 20 which have only 1 factor excluding 1 and the number itself
int noOfFactor(int x)
{
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        if (!(x % i))
            count++;
    }
    return count;
}
int main()
{
    int N;
    printf("\nAll the numbers between 1 to 20 which have only 1 factor excluding 1 and the number itself are: {");
    for (int i = 1; i <= 20; i++)
    {
        if (noOfFactor(i) == 3)
            printf("%d, ", i);
    }
    printf("\b\b}\n");
    return 0;
}