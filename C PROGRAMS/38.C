#include <stdio.h>
#include <conio.h>
void main()
{
    int a1 = 0, a2 = 1, a3, i, n;
    printf("enter number");
    scanf("%d", &n);
    printf("0 1");
    for (i = 1; i <= n; i++)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
        printf(" %d", a3);
    }
    getch();
}