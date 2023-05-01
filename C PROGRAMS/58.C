#include <stdio.h>
int main()
{
    float price[3];
    printf("enter 3 prices");
    scanf("%f%f%f", &price[0], &price[1], &price[2]);
    printf("total price 1 = %.2f", price[0] + (price[0] * 0.18));
    printf("\ntotal price 2 = %.2f", price[1] + (price[1] * 0.18));
    printf("\ntotal price 3 = %.2f", price[2] + (price[2] * 0.18));
    return 0;
}