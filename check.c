#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= (2 * n - 1); j++)
        {

            if (i == 1 || i == 2 * n - 1 || j == 1 || j == 2 * n - 1)
            {
                printf("%d", n);
            }
            
        }

        printf("\n");
    }

    return 0;
}