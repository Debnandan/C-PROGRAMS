#include <stdio.h>
void array(int *arr, int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    array(arr, 6);
    return 0;
}
void array(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}