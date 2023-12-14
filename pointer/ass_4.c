#include <stdio.h>

int main()
{
    char a[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char *ptr = a;
    printf("printing string using pointers : \n");
    printf("%s\n", ptr);
    return 0;
}