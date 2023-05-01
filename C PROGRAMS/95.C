#include <stdio.h>
int main()
{
    int n;
    FILE *fptr;
    fptr = fopen("integer.txt", "r");
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fclose(fptr);
    return 0;
}