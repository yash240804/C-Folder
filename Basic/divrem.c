#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Number a, b\n");
    scanf("%d %d", &a, &b);

    printf("The Quotient Is %f\n", (float)a / b);
    printf("The Remainder Is %d\n", a % b);
    return 0;
}