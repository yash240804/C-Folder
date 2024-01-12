#include <stdio.h>
int digit(int n)
{
    int r;
    while (n > 0)
    {
        r = n % 10;
        printf("%d\n", r);
        n = n / 10;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter The No.");
    scanf("%d", &n);
    digit(n);
    return 0;
}