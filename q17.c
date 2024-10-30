#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    if (N > 29 && N < 0)
        printf("Invalid Input!\n");
    else if (N <= 9)
        printf("The number belongs to 0-9 group\n");
    else if (N <= 19)
        printf("The number belongs to 10-19 group\n");
    else
        printf("The number belongs to 20-29 group\n");
    return 0;
}