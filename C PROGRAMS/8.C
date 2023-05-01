#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b, c;
    float average;
    printf("enter three numbers ");
    scanf("%f%f%f", &a, &b, &c);
    average = (a + b + c) / 3;
    printf("average of the numbers = %f", average);
    getch();
}