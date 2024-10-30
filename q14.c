#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    N % 7 ? printf("\n%d is NOT divisible by 7\n", N) : printf("\n%d is divisible by 7\n", N);
    return 0;
}