#include <stdio.h>

int main()
{
    int n;
    printf("Enter No. Of Stars You Want In Diagonal\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= n-1; j++)
        {
            if (j >= i)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    

    return 0;
}