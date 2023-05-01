#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void calculate(struct vector v1, struct vector v2, struct vector sum);
int main()
{
    struct vector v1 = {5, 6};
    struct vector v2 = {7, 8};
    struct vector sum = {0};
    calculate(v1, v2, sum);
    return 0;
}
void calculate(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of vectors = %di + %dj", sum.x, sum.y);
}