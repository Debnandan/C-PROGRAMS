#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if (a >= 1)
        printf("neutral number");
    else
        printf("not a neutral number");
    getch();
}
