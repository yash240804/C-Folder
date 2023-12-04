#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int c, d;
    printf("Enter Two No.\n");
    scanf("%d %d", &c, &d);
    printf("The Sum Is %d\n", sum(c,d));
    return 0;
}
