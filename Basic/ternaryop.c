#include <stdio.h>

int main()
{
    int a, b;

    printf("enter the number a\n");
    scanf("%d" , &a);

    printf("enter the number b\n");
    scanf("%d" , &b);

    (a>b)?printf("%d Is Greatest", a):printf("%d Is Greatest", b);
    return 0;
}