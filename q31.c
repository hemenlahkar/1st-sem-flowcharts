#include <stdio.h>
int main()
{
    int N, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    for (; N != 0; N /= 10)
    {
        rev *= 10;
        rev += N % 10;
    }
    printf("The reverse of the entered number is %d\n", rev);
    return 0;
}