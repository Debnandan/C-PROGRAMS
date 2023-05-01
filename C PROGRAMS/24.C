#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter number");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        sum = sum + i;
        printf(" %d", i);
    }
    printf("\nsum = %d", sum);
    getch();
}
