#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    printf("enter s1");
    fgets(s1, 20, stdin);
    printf("%s", strupr(s1));
    return 0;
}