#include <stdio.h>
int main()
{
    int M;
    float avg;
    printf("Enter the value of M: ");
    scanf("%d", &M);
    for (int i = M; i < M + 10; i++)
        avg += i;
    avg /= 10;
    printf("The average of 10 natural numbers starting from %d is %.2f", M, avg);
    return 0;
}