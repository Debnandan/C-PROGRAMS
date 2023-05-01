#include <stdio.h>
int main()
{
    int a[10], i;
    printf("enter any 10 numbers");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\ngiven numbers is = ");
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}