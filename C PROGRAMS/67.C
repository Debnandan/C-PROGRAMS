#include <stdio.h>
int main()
{
    int i, fib[20], n;
    printf("enter limit");
    scanf("%d", &n);
    fib[0] = 0;
    fib[1] = 1;
    printf("0 1 ");
    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
    return 0;
}