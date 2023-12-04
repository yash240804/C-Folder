#include <stdio.h>

int main()
{
    int p, r, t, s, u;
    printf("Enter Principle p\n");
    scanf("%d", &p);

    printf("Enter Rate r\n");
    scanf("%d", &r);

    printf("Enter Time t\n");
    scanf("%d", &t);

    s = p * r * t / 100;
    printf("The S.I Is %d\n", s);

    u = p + s;
    printf("Amount To Be Returned %d\n", u);

    return 0;
}
