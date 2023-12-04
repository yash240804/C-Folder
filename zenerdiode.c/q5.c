#include <stdio.h>
int sub(int a, int b);
int main()
{
    int x, y;
    printf("Enter two nos.\n");
    scanf("%d %d", &x, &y);
    sub(x, y);
    printf("Subtraction is %d", sub(x, y));

    return 0;
}
int sub(int a, int b)
{
    return (a - b);
}