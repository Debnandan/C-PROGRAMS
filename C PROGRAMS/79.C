#include <stdio.h>
int main()
{
    char str[20];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\o';
    puts(str);
    return 0;
}