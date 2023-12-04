#include <stdio.h>
#include <string.h>

int main()
{
    char a[10], b[10], c[30], d;
    printf("Enter Your Name\n");
    gets(a);
    printf("Enter Your Friends Name\n");
    gets(b);
    gets(c);
    puts(strcat(strcat(a, c), b));

    return 0;
}