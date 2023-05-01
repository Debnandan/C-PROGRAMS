#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    printf("enter s1");
    gets(s1);
    printf("reverse = %s", strrev(s1));
    return 0;
}