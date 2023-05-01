#include <stdio.h>
#include <conio.h>
int areaofsquare(int s);
int areaofrectangle(int l, int b);
void main()
{
    int s, sq, l, b, rect;
    int choice;
    printf("enter 1 for area of square \nenter 2 for area of rectangle ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("area of square");
        printf("\nenter side");
        scanf("%d", &s);
        sq = areaofsquare(s);
        printf("area of square = %d", sq);
        break;
    case 2:
        printf("area of rectangle");
        printf("\nenter length and bredth");
        scanf("%d%d", &l, &b);
        rect = areaofrectangle(l, b);
        printf("area of rectangle = %d", rect);
        break;
    default:
        printf("\n enter 1-2 only");
    }
    getch();
}

int areaofsquare(int s)
{
    return s * s;
}
int areaofrectangle(int l, int b)
{
    return l * b;
}
