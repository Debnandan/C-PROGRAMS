#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, float *avg);
int main()
{
    int a, b, sum, prod;
    float avg;
    printf("enter two number");
    scanf("%d%d", &a, &b);
    dowork(a, b, &sum, &prod, &avg);
    printf("sum=%d product=%d average=%.2f", sum, prod, avg);
    return 0;
}
void dowork(int a, int b, int *sum, int *prod, float *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2.0;
}