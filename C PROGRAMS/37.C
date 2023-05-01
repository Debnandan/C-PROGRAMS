#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, sum1 = 0, sum2 = 0, i, j;
    printf("enter two numbers");
    scanf("%d%d", &num1, &num2);
    for (i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }
    for (j = 1; j < num2; j++)
    {
        if (num2 % j == 0)
        {
            sum2 = sum2 + j;
        }
    }
    if (num1 == sum2 && num2 == sum1)
    {
        printf("given numbers is an amicable numbers");
    }
    else
    {
        printf("given numbers is not an amicable numbers");
    }
    getch();
}
