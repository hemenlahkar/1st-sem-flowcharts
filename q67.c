#include <stdio.h>
// Display Pascal's triangle

void displayPascal(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        int coef = 1;
        for (int k = 1; k <= i; k++)
        {
            if (k == 1 && i != 1)
                printf(" %d", coef);
            else
                printf("%3d", coef);
            coef = coef * (i - k) / k;
        }
        printf("\n");
    }
}

int main()
{
    int x;
    printf("Enter how many lines you want ");
    scanf("%d", &x);
    displayPascal(x);
    return 0;
}