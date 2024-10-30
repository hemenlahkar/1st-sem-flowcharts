#include <stdio.h>
int main()
{
    int X, Y, Z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &X, &Y, &Z);
    if (X > Y && X > Z)
        printf("%d is the second largest among all!\n", Y > Z ? Y : Z);
    else if (Y > Z)
        printf("%d is the second largest among all!\n", X > Z ? X : Z);
    else
        printf("%d is the second largest among all!\n", X > Y ? X : Y);
    return 0;
}