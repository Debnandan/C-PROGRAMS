#include <stdio.h>
int main()
{
    int *b, a;
    a = 10;
    b = &a;
    printf("value = %d", a);
    printf("\nvalue using pointer : %d", *b);
    return 0;
}