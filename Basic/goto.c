#include <stdio.h>

int main()
{
    int a = 50, n;
    printf("%d\n", a);
    goto xyz;
    printf("Main Content\n");
    scanf("%d", &n);
    printf("%d", n);
xyz:
    printf("Gyan Chodo\n");
    return 0;
}