#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i;
    ptr = (int *)calloc(5, sizeof(int));
    for (i = 0; i < 5; i++)
    {
        printf("enter %d number\t", i + 1);
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 8);
    for (i = 0; i < 8; i++)
    {
        printf("enter %d number\t", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < 8; i++)
    {
        printf("%d value = %d\t", i + 1, ptr[i]);
    }
    return 0;
}