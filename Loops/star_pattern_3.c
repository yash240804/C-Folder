#include <stdio.h>

int main()
{
    int n;
    printf("Enter The No.\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}