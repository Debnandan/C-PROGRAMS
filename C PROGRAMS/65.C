#include <stdio.h>
int check();
int main(int arr[], int n)
{
    int i;
    printf("limit");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("total numbers of odd = %d", check(arr, n));
    return 0;
}
int check(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum = sum + 1;
        }
    }
    return sum;
}
