#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter age ");
    scanf("%d", &a);
    if (a < 18)
    {
        printf("person is not an adult");
    }
    else
    {
        printf("person is adult");
    }
    getch();
}