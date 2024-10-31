#include<stdio.h>
int main()
{
    float a, b, c, d, e, avg;
    printf("Enter the five numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e)/5.0;
    printf("The avereage of the five numbers is %.3f", avg);
    return 0;
}