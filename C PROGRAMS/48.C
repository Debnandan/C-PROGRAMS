#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter limit");
    scanf("%d", &n);
    printf("fibonacci series - \n%d", fib(n));
    return 0;
}
int fib(int n)
{
    int fibn, fibnm1, fibnm2;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    fibnm1 = fib(n - 1);
    fibnm2 = fib(n - 2);
    fibn = fibnm1 + fibnm2;
    return fibn;
}