#include <stdio.h>
void reverse(int arr[], int n);
int main()
{
    int i, n, arr[10];
    printf("enter limit");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    return 0;
}
void reverse(int arr[], int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}