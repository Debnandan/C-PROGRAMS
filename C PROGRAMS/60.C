#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    printf("enter random 10 numbers");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    a[j] = a[i];
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}
