#include <stdio.h>

int arr_rev(int *ptr)
{
    for (int i = 5; i >= 0; i--)
    {
        printf("%d", *(ptr + i));
    }

    return 0;
}

int main()
{
    int a[20];
    printf("Enter Element In Array\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    arr_rev(a);

    return 0;
}