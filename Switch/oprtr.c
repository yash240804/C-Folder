#include <stdio.h>

int main()
{
    int choice, a, b;
    printf("Enter The Number a\n");
    scanf("%d", &a);

    printf("Enter The Number b\n");
    scanf("%d", &b);

    printf("Press\n 1.AND\n 2.OR\n 3.XOR\n 4.LEFT SHIFT\n 5.RIGHT SHIFT\n");
    printf("Enter Your Choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("The And Of a, b Is %d\n", a & b);

        break;

    case 2:
        printf("The Or Of a, b Is %d\n", a | b);

        break;

    case 3:
        printf("The Xor Of a, b Is %d\n", a ^ b);

        break;
    }
    return 0;
}