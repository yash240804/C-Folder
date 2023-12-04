#include <stdio.h>
int fib_rec(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter No. Of Element You Want In Fib Series\n");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        fib_rec(i);
        printf("%d\n", fib_rec(i));
    }

    return 0;
}
