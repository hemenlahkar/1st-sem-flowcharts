#include<stdio.h>
//Add two numbers
int main()
{
    int a, b, c;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\n%d + %d = %d", a, b, c);
    return 0;
}
