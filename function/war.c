#include <stdio.h>
int sum()
{
    int x, y, z;
    printf("Enter Two No.\n");
    scanf("%d %d", &x, &y);
    z = x + y;
    return z;
}

int main()
{
    printf("The Sum Is %d\n", sum());
    return 0;
}
