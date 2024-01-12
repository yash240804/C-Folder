#include <stdio.h>
int linser(int a[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (n == a[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 90, 4, 100, 200, 80};
    int element;
    int size = sizeof(a) / sizeof(a[0]);
    printf("Enter No. You Want to search\n");
    scanf("%d", &element);
    printf("Element %d Found At Index %d", element, linser(a, element, size));
    return 0;
} //-1 represents not found