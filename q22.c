#include <stdio.h>
int main()
{
    int N;
    float avg = 0;
    printf("Enter the number till which you want the average: ");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
        avg += i;
    avg /= (float)N;
    printf("\nThe average of the natural numbers till %d is %.3f\n", N, avg);
    return 0;
}