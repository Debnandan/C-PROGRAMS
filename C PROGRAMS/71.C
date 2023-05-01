#include <stdio.h>
int main()
{
    char name[20];
    fgets(name, 20, stdin);
    puts(name);
    return 0;
}