#include <stdio.h>
int main()
{
    int a, b, c, *d, *e, *f;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    printf("a=%d b=%d", a, b);
    d = &a;
    e = &b;
    f = &c;
    *f = *d;
    *d = *e;
    *e = *f;
    printf("\nafter swapping");
    printf("\na=%d b=%d", a, b);
    return 0;
}