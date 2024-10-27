#include<stdio.h>
//Enter a price of an item and calculate net amount after 15% discount
int main()
{
    int price;
    float N;
    printf("Enter the price: ");
    scanf("%d",&price);
    N = price*(1-0.15);
    printf("\nPrice after discount: %d", N);
    return 0;
}