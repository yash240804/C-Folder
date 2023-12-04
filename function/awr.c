#include <stdio.h>
int product(int a, int b)
{
    printf("The Product Of Two No. Is %d", a * b);
}

int main()
{
    int num1, num2;
    printf("Enter Two No.\n");
    scanf("%d %d", &num1, &num2);
    product(num1, num2);
    return 0;
}
