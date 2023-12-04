#include <stdio.h>

int main()
{
    int percentage;
    printf("Enter Your Percentage\n");
    scanf("%d", &percentage);

    if (percentage >= 75)
    {
        printf("You Have Passed With Destinction");
    }
    else if (percentage >= 60)
    {
        printf("You Have Passed With 1st Class");
    }
    else if (percentage >= 50)
    {
        printf("You Have Passed With 2nd Class");
    }
    else
    {
        printf("You Are Failed");
    }
    return 0;
}
