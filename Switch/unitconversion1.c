#include <stdio.h>

int main()
{
    int a, choice;
    printf("Enter Value To Be Converted\n");
    scanf("%d", &a);
    printf("Enter The Your Choice\n Press\n 1.Kms To Miles\n 2.Pounds To Kgs\n 3.Inches To Meters\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d Km Is %f Mile", a, (float)a / 1.609);
        break;

    case 2:
        printf("%d Pound Is %f Kg", a, (float)a / 2.205);
        break;

    case 3:
        printf("%d Inche Is %f m", a, (float)a / 39.37);
        break;
    }
    return 0;
}
