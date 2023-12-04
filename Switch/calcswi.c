#include <stdio.h>

int main()
{
    int choice, a, b;
    printf("Enter The Number a\n");
    scanf("%d", &a);

    printf("Enter The Number b\n");
    scanf("%d", &b);
    printf("Press\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n");
    printf("Enter Your Choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You Have Selected Addition\n");
        printf("The Sum Is %d\n", a + b);
        break;

    case 2:
        printf("You Have Selected Subtraction\n");
        printf("The Subtraction Is %d\n", a - b);
        break;

    case 3:
        printf("You Have Selected Multiplication\n");
        printf("The Multiplication Is %d\n", a * b);
        break;

    case 4:
        printf("You Have Selected Division\n");
        printf("The Division Is %d\n", a / b);
        break;

    case 5:
        printf("You Have Selected Modulus\n");
        printf("The Modulus Is %d\n", a % b);
        break;

    default:
        printf("Enter Valid Choice");
        break;
    }
    return 0;
}
