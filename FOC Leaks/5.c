#include <stdio.h>
int fib(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        b = b + a;
        a = b - a;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter No. Of Element You Want In\n");
    scanf("%d", &n);
    fib(n);

    return 0;
}