#include <stdio.h>
// Convert OFF bit to ON bit and reverse using bitwise operator

int main()
{
    int num, x;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    if (num < 1)
    {
        printf("Invalid input: Number must be greater than 0");
        return -1;
    }
    if (num = 1) num = 0;
    else
    {
        for (x = 2; x < num; x *= 2);
        num ^= x - 1;
    }
    printf("After fliping all the bits, the number becomes: %d", num);
    return 0;
}