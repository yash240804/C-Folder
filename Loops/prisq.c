#include <stdio.h>

int main()
{
    int i, num, a = 2, b = 3, c = 5, d = 7;
    printf("Enter Number To Which You Want To Print Squares Of Prime Nos.\n");
    scanf("%d", &i);
    printf("%d %d\n", a, a * a);
    printf("%d %d\n", b, b * b);
    printf("%d %d\n", c, c * c);
    printf("%d %d\n", d, d * d);

    for (num = 2; num < i; num++)
    {

        if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
        {
            printf("%d %d\n", num, num * num);
        }
    }

    return 0;
}
//logic is wrong not proper code