#include <stdio.h>

int main()
{
    char Subject[100] ;
    printf("Enter Your Subject\n");
    scanf("%s", &Subject);

    printf("You Have Entered %s As Your Subject\n", Subject);
    if (strcmp("mathsandscience", Subject)==0)
    {
        printf("Your Gift Is Rs.45\n");
    }
    else if (strcmp("maths", Subject)==0) 
    {
        printf("Your Gift Is Rs.15\n");
    }
    else if (strcmp("science", Subject)==0)
    {
        printf("Your Gift Is Rs.15\n");
    }
    else
    {
        printf("Enter Valid Subject\n");
    }
    return 0;
}
