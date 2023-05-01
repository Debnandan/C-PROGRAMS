#include <stdio.h>
double celcius(double c);
int main()
{
    double c;
    printf("enter celcius");
    scanf("%lf", &c);
    printf("temp in fahrenheit %lf", celcius(c));
    return 0;
}
double celcius(double c)
{
    double f;
    f = (c * (9.0 / 5.0)) + 32;
    return f;
}