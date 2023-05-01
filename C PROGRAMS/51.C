#include <stdio.h>
int main()
{
    int a, *b;
    printf("enter a number");
    scanf("%d", &a);
    b = &a;
    printf("%d", *b + 1);
    return 0;
}