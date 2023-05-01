#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("enter a number ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    getch();
}