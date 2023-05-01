#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, fact = 1, num;
    printf("enter number");
    scanf("%d", &num);
    do
    {
        fact = fact * i;
        i++;
    } while (i <= num);
    printf("factorial= %d", fact);
    getch();
}
