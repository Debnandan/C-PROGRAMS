#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("enter s1");
    fgets(s1, 20, stdin);
    strcpy(s2, s1);
    puts(s2);
    return 0;
}