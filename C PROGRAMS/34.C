#include <stdio.h>
#include <conio.h>
void main()
{
    int num, rev = 0;
    printf("enter numbers");
    scanf("%d", &num);
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    printf("reverse = %d", rev);
    getch();
}