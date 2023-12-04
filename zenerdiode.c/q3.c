#include <stdio.h>

int main()
{
    char a[50];
    int i = 0;
    printf("Enter String\n");
    scanf("%s", a);
    while (a[i] != '\0')
    {
        i++;
    }
    printf("%d", i);

    return 0;
}