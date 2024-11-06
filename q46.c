#include <stdio.h>
int power(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x * power(x, y - 1);
}
int main()
{
    int X, Y;
    printf("Enter the two numbers: ");
    scanf("%d %d", &X, &Y);
    printf("%d to the power of %d is %d\n", X, Y, power(X, Y));
    return 0;
}