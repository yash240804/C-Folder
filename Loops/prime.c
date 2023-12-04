#include <stdio.h>

int main()
{
    int prime, a, b;
    printf("Enter The Range Between You Want Prime No.\n");
    scanf("%d %d", &a, &b);
    printf("The Sqaure Of Prime Between %d And %d Is\n", a, b);
    for (int i = a; i <= b; i++)
    {
        prime = 0;
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                prime = 1;
            }
        }
        if (prime == 0)
        {
            printf("%d - %d\n", i, i * i);
        }
    }

    return 0;
}