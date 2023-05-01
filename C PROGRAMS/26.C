#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    do
    {
        printf("\nenter number");
        scanf("%d", &n);
        printf(" %d", n);
        if (n % 2 != 0)
        {
            printf("\nthank u");
            break;
        }
    } while (1);
    getch();
}