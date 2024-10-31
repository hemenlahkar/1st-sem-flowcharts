#include <stdio.h>
int main()
{
    int M, N;
    float avg = 0;
    printf("Enter the value of M and N: ");
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++)
        avg += i;
    avg /= (float)(N - M + 1);
    if (avg)
        printf("\nThe average of the natural numbers between %d and %d(including the %d and %d) is %.3f", M, N, M, N, avg);
    else
        printf("\nInvalid Input!");
    return 0;
}