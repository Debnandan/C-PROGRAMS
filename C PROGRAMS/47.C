#include <stdio.h>
int percentage(int sci, int math, int sans);
int main()
{
    int sci, math, sans;
    printf("enter marks sci,math,sans");
    scanf("%d%d%d", &sci, &math, &sans);
    printf("percentage = %d", percentage(sci, math, sans));
    return 0;
}
int percentage(int sci, int math, int sans)
{
    int p;
    p = ((sci + math + sans) / 3);
    return p;
}