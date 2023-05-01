#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, m = 1;
    printf("enter number");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("\n%d", m);
    }
    getch();
}