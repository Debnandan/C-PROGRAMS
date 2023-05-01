#include <stdio.h>
#include <conio.h>
void calculatePrice(float p);
void main()
{
    float p;
    printf("enter price");
    scanf("%f", &p);
    calculatePrice(p);
    getch();
}
void calculatePrice(float p)
{
    float value;
    value = p + (p * .18);
    printf("total price with gst = %.2f", value);
}