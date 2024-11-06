#include <stdio.h>
// Enter a number and check whether it is fibonacci number or not
int main()
{
    int N, current = 1, previous = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &N);

    while (current < N)
    {
        temp = current;
        current += previous;
        previous = temp;
    }
    if (current == N)
        printf("%d is a fibonacci number!\n", N);
    else
        printf("%d is NOT a fibonacci number!\n", N);
    return 0;
}