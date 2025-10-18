#include <stdio.h>
#include <math.h>
// Calculate 2's complement and 10's complement of a number

int noOfDigits(int x)
{
    int digit = 0;
    while (x != 0)
    {
        digit++;
        x /= 10;
    }
    return digit;
}

int tensComplement(int n)
{
    int digit = noOfDigits(n);
    int result = pow(10, digit) - n - 1;
    return result;
}

int twosComplement(int n)
{
    return ~n + 1;
}

int main()
{
    int number = 13;

    printf("\nTwo's complement: %i", twosComplement(number));
    printf("\nTen's complement: %i", tensComplement(number));
    return 0;
}