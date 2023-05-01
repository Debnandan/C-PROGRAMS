#include <stdio.h>
int main()
{
    int a[10], i, n = 0;
    printf("enter any 10 numbers");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        n = n + a[i];
    }
    printf("sum = %d", n);
    return 0;
}