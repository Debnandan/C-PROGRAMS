#include <stdio.h>
int main()
{
    int a[10], i, sum = 0, sum1 = 0;
    printf("enter 10 numbers");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
        else
        {
            sum1 = sum1 + a[i];
        }
    }
    printf("sum of even numbers = %d", sum);
    printf("\nsum of odd numbers = %d", sum1);
    return 0;
}