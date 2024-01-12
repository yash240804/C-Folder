#include <stdio.h>
int lenght(char *ptr)
{
    int i = 0;
    while (*(ptr + i) != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char s[100];
    scanf("%[^\n]", s);
    printf("%d", lenght(s));

    return 0;
}