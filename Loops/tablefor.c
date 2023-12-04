#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter The No.\n");
    scanf("%d", &a);

    for (i = 1; i < 11; i++)
    {
        printf("%dx%d=%d\n", a, i, a * i);
    }
    return 0;
}
