#include <stdio.h>
int main()
{
    int a, b, *c, *d;
    printf("enter two number");
    scanf("%d%d", &a, &b);
    c = &a;
    d = &b;
    printf("sum = %d", (*c) + (*d));
    return 0;
}