#include <stdio.h>
int main()
{
    int temp, arr[10], i, j;
    printf("enter any 10 numbers");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[j] = arr[i];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("greatest number = %d", arr[9]);
    return 0;
}