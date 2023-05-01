#include <stdio.h>
int main()
{
    int a, b, add;
    FILE *fptr;
    fptr = fopen("sum.txt", "r");
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr = fopen("sum.txt", "w");
    add = a + b;
    fprintf(fptr, "%d", add);
    fclose(fptr);
    return 0;
}