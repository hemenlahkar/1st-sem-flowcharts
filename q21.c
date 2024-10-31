#include <stdio.h>
int main()
{
    float avg = 0;
    for (int i = 1; i <= 20; i++)
        avg += i;
    avg /= 20.0;
    printf("The average of the numbers between 1 to 20 is %.2f\n", avg);
    return 0;
}