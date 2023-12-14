#include <stdio.h>

int main()
{
    char a[5] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = a;
    printf("printing array using pointers : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", *(ptr + i));
    }
    return 0;
}