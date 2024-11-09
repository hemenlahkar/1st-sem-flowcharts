#include <stdio.h>
// Enter a number and base value. Convert number to the given base.
void print_reverse(int *x, int length)
{
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
}
int main()
{
    int num, base, numInBase[100], len = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the base: ");
    scanf("%d", &base);
    while (num != 0)
    {
        numInBase[len] = num % base;
        num /= base;
        len++;
    }
    print_reverse(numInBase, len);
    return 0;
}