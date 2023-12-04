#include <stdio.h>

int main()
{
    char a[50];
    int i = 0, j, n = 0;
    printf("Enter String\n");
    scanf("%s", a);
    while (a[i] != '\0')
    {
        i++;
    }
    printf("%d\n", i);
    for (j = (i - 1); j >= 0; j--)
    {
        a[n] = a[j];
        n++;
    }
    printf("%d\n", n);
    a[4] = '\0';
    printf("%s", a);

    return 0;
}