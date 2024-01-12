#include <stdio.h>

int main()
{
    int year;
    printf("Enter The Year You Want To Check For Leap Year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {

        printf("%d Is A Leap Year", year);
    }
    else
    {
        printf("%d Is Not A Leap Year", year);
    }
    return 0;
}