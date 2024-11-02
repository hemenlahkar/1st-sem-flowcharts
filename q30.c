#include <stdio.h>
int main()
{
    int N, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    const int temp = N;
    for (; N != 0; N /= 10)
        sum += (N % 10) * (N % 10) * (N % 10);
    if (temp == sum)
        printf("%d is a Armstrong Number!\n", temp);
    else
        printf("%d is NOT a Armstrong Number!\n", temp);
    return 0;
}