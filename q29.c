#include <stdio.h>
int main()
{
    int N, c_odd, c_even, odd[10], even[10];
    printf("Enter the number: ");
    scanf("%d", &N);
    for (c_even = c_odd = 0; N != 0; N /= 10)
    {
        if ((N % 10) % 2)
        {
            odd[c_odd] = N % 10;
            c_odd++;
        }
        else
        {
            even[c_even] = N % 10;
            c_even++;
        }
    }
    printf("\nThere are %d even and %d odd numbers in the entered number!", c_even, c_odd);
    if (c_even)
    {
        printf("\nEven numbers are: {");
        for (int i = 0; i < c_even; i++)
            printf("%d, ", even[i]);
        printf("\b\b}");
    }
    if (c_odd)
    {
        printf("\nOdd numbers are: {");
        for (int i = 0; i < c_odd; i++)
            printf("%d, ", odd[i]);
        printf("\b\b}");
    }

    return 0;
}