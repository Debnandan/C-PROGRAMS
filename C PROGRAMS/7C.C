#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("enter a number ");
    scanf("%d", &x);
    printf("%d", x > 9 && x < 100);
    getch();
}