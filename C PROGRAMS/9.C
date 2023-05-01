#include <conio.h>
#include <stdio.h>
#include <ctype.h>
void main()
{
    char a;
    printf("enter a character");
    scanf("%c", &a);
    if (isdigit(a))
    {
        printf("enter character is digit");
    }
    else
    {
        printf("enter character is not a digit");
    }
    getch();
}