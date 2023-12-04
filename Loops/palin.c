#include <stdio.h>

int main()
{
    int n1, n2, t, rem, div;
    printf("Enter The Range Between Which You Want Palindrome Nos.\n");
    scanf("%d %d", &n1, &n2);
    printf("The Palindrome Nos. Between %d And %d Are :\n", n1, n2);

    for (int i = n1; i <= n2; i++)
    {
        div = 0;
        t = i;
        while (i > 0)
        {
            rem = i % 10;
            div = div * 10 + rem;
            i = i / 10;
        }
        if (t == div)
        {
            printf("%d\n", t);
        }
        else
        {
            printf("");
        }
        i = t;
    }
    return 0;
}
