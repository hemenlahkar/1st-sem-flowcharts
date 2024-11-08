#include<stdio.h>
//Calculate square root of a number

int main()
{
    unsigned int x;
    float s;
    printf("Enter the number: ");
    scanf("%u", &x);
    for(s = 0; s*s<x; s+=0.001);
    printf("\n%.2f", s);
    return 0;
}