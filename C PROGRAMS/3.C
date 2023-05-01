#include <stdio.h>
#include <conio.h>
void main()
{
    float r, area;
    printf("enter radius");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("area of circle = %.2f", area);
    getch();
}