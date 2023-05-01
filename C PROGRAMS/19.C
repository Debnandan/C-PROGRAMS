#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i, n;
    printf("enter number");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("given number is perfect number %d", sum);
    }
    else
    {
        printf("given number is not perfect number %d", sum);
    }
    getch();
}