#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    a % 2 == 0 ? printf("given number is even") : printf("given number is odd");
    getch();
}