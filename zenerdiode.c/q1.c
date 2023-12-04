#include <stdio.h>

int main()
{
    char a[50];
    int i=0;
    printf("Enter A String\n");
    scanf("%s", a);
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        i++;
    }
    printf("%s",a);

    return 0;
}