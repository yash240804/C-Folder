#include <stdio.h>
char uppercase(char *arr)
{
    int i = 0;
    while (*(arr + i) != '\0')
    {
        if (*(arr + i) >= 'a' && *(arr + i) <= 'z')
        {
            *(arr + i) = *(arr + i) - 32;
        }

        i++;
    }
}
int main()
{
    char a[25];
    printf("String Enter Kar\n");
    gets(a);
    puts(a);
    uppercase(a);
    puts(a);

    return 0;
}