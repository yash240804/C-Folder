#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter Range In Which You Want Even No.\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    while (n1 <= n2)
    {
        while (n1 % 2 == 0)
        {
            printf("%d ", n1);
            break;
        }

        n1++;
    }

    return 0;
}