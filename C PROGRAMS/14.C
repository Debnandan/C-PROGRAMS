#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("enter alphabets ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("lowercase");
    else if (ch >= 'A' && ch <= 'Z')
        printf("uppercase");
    else
        printf("not an alphabet");
    getch();
}