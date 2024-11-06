#include <stdio.h>
// Display largest and smallest common factor of two numbers
int main()
{
    int M, N;
    printf("Enter two number: ");
    scanf("%d %d", &M, &N);
    printf("\nSmallest common factor: ");
    for (int i = 2; i <= M; i++)
    {
        if (!(M % i) && !(N % i))
        {
            printf("%d\n", i);
            break;
        }
    }
    printf("Largest common factor: ");
    for (int i = M; i > 1; i--)
    {
        if (!(M % i) && !(N % i))
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}