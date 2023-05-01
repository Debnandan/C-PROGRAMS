#include <stdio.h>
#include <conio.h>
void namaste();
void bonjour();
void main()
{
    char c, i, f;
    printf("enter nation first letter");
    scanf("%c", &c);
    if (c == 'i')
    {
        namaste();
    }
    else if (c == 'f')
    {
        bonjour();
    }
    else
    {
        printf("hello");
    }
    getch();
}

void namaste()
{
    printf("namaste");
}
void bonjour()
{
    printf("bonjour");
}