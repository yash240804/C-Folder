#include <stdio.h>
#include <string.h>

int main()
{

    char a[50], b[50], c[50];
    scanf("%s", a);
    scanf("%s", b);
    printf("Use Of Strlwr %s\n", strlwr(a));
    printf("Use Of Strlwr %s\n", strlwr(b));

    printf("Use Of Strupr %s\n", strupr(a));
    printf("Use Of Strupr %s\n", strupr(b));

    printf("Use Of Strlen %d\n", strlen(a));
    printf("Use Of Strlen %d\n", strlen(b));

    printf("Use Of Strlcat %s\n", strcat(a, b));

    printf("Use Of Strlcmp %d\n", strcmp(a, b));

    printf("Use Of Strcpy %s\n", strcpy(c, a));
    printf("%s", c);
    
    return 0;
}