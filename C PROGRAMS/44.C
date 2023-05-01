#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter number ");
    scanf("%d", &n);
    printf("sum = %d", sum(n));
    return 0;
}
int sum(int n)
{
    int sumnm1, sumn;
    if (n == 1)
    {
        return 1;
    }
    sumnm1 = sum(n - 1);
    sumn = sumnm1 + n;
    return sumn;
}
