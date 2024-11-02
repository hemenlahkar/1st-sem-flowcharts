#include <stdio.h>
int main()
{
    int N, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    const int temp = N;
    for (; N != 0; N /= 10)
        sum += N % 10;
    printf("\nThe sum of all the digits of %d is %d\n", temp, sum);
    return 0;
}