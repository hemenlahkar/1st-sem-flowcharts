#include <stdio.h>

int checkBitOnOff(int *num, int bit)
{
    bit--;
    return ((*num >> bit) & 1);
}

int main()
{
    int number, bit;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the bit position you want to check(from the right): ");
    scanf("%d", &bit);
    for (int i = 31; i >= 0; i--)
        printf("%d", (number >> i) & 1);
    if (checkBitOnOff(&number, bit))
        printf("\nThe %d%s bit is ON\n", bit, bit == 1 ? "st" : (bit == 2 ? "nd" : (bit == 3 ? "rd" : "th")));
    else
        printf("\nThe %d%s bit is OFF\n", bit, bit == 1 ? "st" : (bit == 2 ? "nd" : (bit == 3 ? "rd" : "th")));
    return 0;
}