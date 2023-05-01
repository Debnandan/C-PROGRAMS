#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 20;
    ptr[1] = 30;
    ptr[2] = 40;
    ptr[3] = 50;
    ptr[4] = 60;
    for (i = 0; i < 5; i++)
    {
        printf("price %d = %d\n", i + 1, ptr[i]);
    }
    return 0;
}