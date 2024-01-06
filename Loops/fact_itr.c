#include <stdio.h>

int main()
{
    int n, r = 1;
    printf("Enter The No. You Want FActorial Of : ");
    scanf("%d", &n);
    for (int i = (n); i > 0; i--)
    {
        r *= i;
    }
    printf("%d\n", r);

    return 0;
}