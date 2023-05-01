#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, m = 1;
    printf("enter number");
    scanf("%d", &n);
    for (i = 10; i >= 1; i--)
    {
        m = n * i;
        printf("\n%d", m);
    }
    getch();
}