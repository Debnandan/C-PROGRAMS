#include <stdio.h>
#include <conio.h>
void printHello(int count);
int main()
{
    int count;
    printf("enter times");
    scanf("%d", &count);
    printHello(count);
    return 0;
}

void printHello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello\n");
    printHello(count - 1);
}