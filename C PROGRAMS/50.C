#include <stdio.h>
int main()
{
    int *b, a, **c;
    a = 10;
    b = &a;
    c = &b;
    printf("value = %d", a);
    printf("\nvalue using pointer to pointer : %d", **c);
    return 0;
}