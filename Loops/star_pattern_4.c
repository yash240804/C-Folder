#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of rows you want to print in inverted pyramid\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("* ");
                //space nhi dega toh pyramid
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
