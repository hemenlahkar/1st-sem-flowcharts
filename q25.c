#include <stdio.h>
int main()
{
    int S = 0;
    for (int i = 1; i <= 11; i += 2)
        S += i;
    printf("The sum of the odd natural numbers till 11 is %d\n", S);
    return 0;
}