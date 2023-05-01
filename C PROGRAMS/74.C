#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("enter s1");
    fgets(s1, 20, stdin);
    printf("enter s2");
    fgets(s2, 20, stdin);
    strcat(s1, s2);
    puts(s1);
    return 0;
}