#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex c = {5, 8};
    printf("real = %d", c.real);
    printf("\nimaginary = %d", c.img);
    return 0;
}