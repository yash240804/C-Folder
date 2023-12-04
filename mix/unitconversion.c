#include <stdio.h>

int main()
{
    float kmtomiles = 0.621371;
    float inchestocm = 2.54;
    float poundstokg = 0.453592;
    float a;
    char b;

    while (1)
    {
        printf("Press\n q. For Quit\n 1. For kmtomiles\n 2. For inchestocm\n 3. For poundstokg\n");
        scanf(" %c", &b);
        switch (b)
        {
        case 'q':
            goto end;
            break;

        case '1':
            printf("Enter The Value\n");
            scanf("%f", &a);
            printf("%f km is equal to %f miles\n", a, a * kmtomiles);
            break;

        case '2':
            printf("Enter The Value\n");
            scanf("%f", &a);
            printf("%f inches is equal to %f cm\n", a, a * inchestocm);
            break;

        case '3':
            printf("Enter The Value\n");
            scanf("%f", &a);
            printf("%f pounds is equal to %f kgs\n", a, a * poundstokg);
            break;
        }
    }
end:

    return 0;
}
