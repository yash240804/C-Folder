#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    scanf("%[^\n]", a);
    printf("The Entered String Is : %s", a);
    return 0;
}