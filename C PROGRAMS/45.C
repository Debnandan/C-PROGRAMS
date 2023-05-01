#include <stdio.h>
#include <conio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    printf("factorial = %d", fact(n));
    return 0;
}
int fact(int n)
{
    int factnm1, factn;
    if (n == 0)
    {
        return 1;
    }
    factnm1 = fact(n - 1);
    factn = factnm1 * n;
    return factn;
}