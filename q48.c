#include <stdio.h>
int main()
{
    int digits[10], N;
    for (int i = 0; i < 10; i++)
        digits[i] = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    while(N!=0)
    {
        digits[N%10]++;
        N/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        if(digits[i])
        printf("\nThe frequency of %d is %d", i, digits[i]);
    }
    
    return 0;
}