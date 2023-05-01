#include <stdio.h>
int main()
{
    int x, arr[10], i, times = 0;
    printf("enter any 10 numbers");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter a number");
    scanf("%d", &x);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            times = times + 1;
        }
    }
    printf("repeated %d times", times);
    return 0;
}