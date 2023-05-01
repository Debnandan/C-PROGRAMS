#include <stdio.h>
int main()
{
    int a, b, c, *d, *e, *f;
    printf("enter three numbers");
    scanf("%d%d%d", &a, &b, &c);
    d = &a;
    e = &b;
    f = &c;
    if (*d > *e && *d > *f)
    {
        printf("a is greater");
    }
    else if (*e > *d && *e > *f)
    {
        printf("b is greater");
    }
    else if (*f > *d && *f > *e)
    {
        printf("c is greater");
    }
    return 0;
}