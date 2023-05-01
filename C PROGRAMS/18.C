
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a, sum = 0, sum1 = 0;
    printf("enter ending number");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum1 = sum1 + i;
        }
    }
    printf("sum of even number = %d", sum);
    printf("sum of odd number = %d", sum1);
    getch();
}