#include <stdio.h>
// Display all factors of a given number
int main()
{
    int N;
    printf("Enter the nubmer: ");
    scanf("%d", &N);
    printf("The factors of %d are: ", N);
    for (int i = 1; i <= N; i++)
        if (!(N % i))
            printf("%d ", i);

    return 0;
}