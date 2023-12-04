#include <stdio.h>

int main()
{
    int a, choice, c, d;
    printf("Enter Your Amount\n");
    scanf("%d", &a);
    printf("Press 1.New Customer\n 2.Old Customer\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You Have Got 5 Percent Discount\n");
        c = a * 5 / 100;
        printf("Discount Of %d Is Rewarded\n", c);
        printf("Amount To Be Paid Is %d", a-c);
        break;

    case 2:
        printf("You Have Got 10 Percent Discount\n");
        d = a * 10 / 100;
        printf("Discount Of %d Rewarded\n", d);
        printf("Amount To Be Paid Is %d", a-d);
        break;
    }
    return 0;
}
