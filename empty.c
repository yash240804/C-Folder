#include <stdio.h>
#include <stdlib.h>
int arr_rev(int *arr, int n)
{
    int k = 0;
    int temp;
    for (int i = n - 1; i >= 0; i--)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + k);
        *(arr + k) = temp;
        k++;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    arr_rev(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}