#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
void main()
{
    int a, b, s;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    s = sum(a, b);
    printf("sum= %d", s);
    getch();
}
int sum(int a, int b)
{
    return a + b;
}