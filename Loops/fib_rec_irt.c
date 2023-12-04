#include <stdio.h>

int main()
{
    int a = 0, b = 1, n;
    printf("Enter The No. Of Element You Want In Fib Series\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);
        b = a + b;
        a = b - a;

        printf(" ");
    }

    return 0;
}