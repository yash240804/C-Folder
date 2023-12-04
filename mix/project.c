#include <stdio.h>
int fib_rec(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int main()
{
    int n, a = 0, b = 1;
    char ch;
    printf("Enter No. Of Element You Want in Fib Series\n");
    scanf("%d", &n);

    while (1)
    {
        printf("Press\n a.Fib_Rec\n b.Itr\n q.quit\n");
        scanf(" %c", &ch);

        switch (ch)
        {
        case 'a':
            for (int i = 1; i < n; i++)
            {
                printf("%d\n", fib_rec(i));
            }

            break;
        case 'b':
            for (int i = 0; i < n; i++)
            {
                printf("%d\n", a);
                b = b + a;
                a = b - a;
                        }

            break;
        case 'q':
            goto end;
            break;
        }
    }
end:
    return 0;
}