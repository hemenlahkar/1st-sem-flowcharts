#include <stdio.h>
int main()
{
    int N, count;
    printf("Enter the number: ");
    scanf("%d", &N);
    for (count = 0; N != 0; count++)
        N /= 10;
    printf("The number of digit in the entered number is %d", count);
    return 0;
}