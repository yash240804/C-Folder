#include <stdio.h>
int palin(int n)
{
    int r, div = 0, t = n;
    while (n > 0)
    {
        r = n % 10;
        div = r + div * 10;
        n = n / 10;
    }
    if (div == t)
    {
        printf("%d is palindrome\n", t);
    }
    else
    {
        printf("%d is not palindrome\n", t);
    }
}

int main()
{
    int n;
    printf("Enter No. You Want To Check For Palindrome\n");
    scanf("%d", &n);
    palin(n);

    return 0;
}