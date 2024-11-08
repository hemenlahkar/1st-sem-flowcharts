#include <stdio.h>
// Convert binary number into its decimal equivalent

int power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main()
{
    int dec = 0, bin, i = 0;
    printf("Enter the binary number: ");
    scanf("%d", &bin);
    while (bin != 0)
    {
        if (!(bin % 10 == 0 || bin % 10 == 1))
        {
            printf("Invalid Input!!");
            goto end;
        }
        dec = dec + (bin % 10) * power(2, i);
        bin /= 10;
        i++;
    }
    printf("The decimal equivalent of the binary number is %d", dec);
end:
    return 0;
}