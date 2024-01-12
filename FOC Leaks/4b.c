#include <stdio.h>
int prime(int n)
{
    int risk = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            risk;
        }
        else
        {
            risk = 0;
        }
    }
    if (risk == 1)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is not prime", n);
    }
}

int main()
{
    int n;
    printf("Enter The No. You Want In Check For Prime\n");
    scanf("%d", &n);
    prime(n);
    return 0;
}