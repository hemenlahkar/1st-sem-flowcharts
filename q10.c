#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter the two numbers: ");
    scanf("%d%d", &A, &B);
    if (A != B)
    {
        A>B?printf("\n%d is larger than %d", A, B): printf("\n%d is larger than %d", B, A);
    }
    else printf("\n%d and %d are equal", A, B);
    return 0;
}