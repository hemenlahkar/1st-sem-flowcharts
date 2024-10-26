#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    float avg;
    printf("Enter the five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e)/5.0;
    printf("The average of %d, %d, %d, %d and %d is %.1f", a, b, c, d, e, avg);
    return 0;
}