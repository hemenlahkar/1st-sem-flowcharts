#include<stdio.h>
/*Enter a price and calculate how many currency note will require for that amount.
Currency notes are Five, Ten, Twenty, Fifty*/
int main()
{
    int P, fifty_n, twenty_n, ten_n, five_n;
    fifty_n = P/50;
    twenty_n = (P - fifty_n*50)/20;
    ten_n = (P - fifty_n*50 - twenty_n*20)/10;
    five_n = (P - fifty_n*50 - twenty_n*20 - ten*10)/5;
    printf("\nRequired notes are: ");
    if(fifty_n)
        printf("\n%d fifty rupees notes", fifty_n);
    if(twenty_n)
        printf("\n%d twenty rupees notes", twenty_n);
    if(ten_n)
        printf("\n%d ten rupees note", ten_n);
    if(five_n)
        printf("\n%d five rupees note", five_n);
    return 0;
}