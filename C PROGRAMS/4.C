#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, area;
    printf("enter length and bredth");
    scanf("%d%d", &a, &b);
    area = a * b;
    printf("area of rectangle = %d", area);
    getch();
}