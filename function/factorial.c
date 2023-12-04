#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{
    int num;
    printf("Enter A No.\n");
    scanf("%d", &num);
    factorial(num);
    printf("The Factorial Is %d", factorial(num));
    return 0;
}
