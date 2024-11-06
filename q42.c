#include<stdio.h>
//Display all common factors of two numbers
int main()
{
    int M, N;
    printf("Enter the two numbers: ");
    scanf("%d %d", &M, &N);
    printf("The common factors of the entered numbers are: ");
    for (int i = 1; i <= M; i++)
    {
        if (!(M%i) && !(N%i))
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}