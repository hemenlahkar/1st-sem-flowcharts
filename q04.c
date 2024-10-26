#include<stdio.h>
int main(){
    int r;
    float area, peri;
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    peri = 2 * 3.14 * r;
    printf("\nThe area of the circle is %.2f\nThe perimeter of the circle is %.2f", area, peri);
    return 0;
}