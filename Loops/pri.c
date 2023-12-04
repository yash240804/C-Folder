#include <stdio.h>

int main()
{
    int i, num;
    int isprime = 1;
    printf("Enter Number To Which You Want To Print Squares Of Prime Nos.\n");
    scanf("%d", &i);

    for (num = 2; i >= num * num; num++)
    {
        if (i % num == 0)
        {
            isprime = 0;
        }
    }
    if (isprime)
    {
        printf("is prime no.\n");
    }
    else
    {
        printf("Not prime no.\n");
    }

    return 0;
}