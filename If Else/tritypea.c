#include <stdio.h>

int main()
{
    int i;
    printf("Enter Degree Of Angle i\n");
    printf("Note : Angle i Must Be Greateat Angle Among The Three Angle\n");
    scanf("%d", &i);

    if (i > 90 && i < 180)
    {
        printf("Triangle Is Obtuse");
    }
    else if (i < 90 && i > 0)
    {
        printf("Triangle Is Acute");
    }
    else if (i == 90)
    {
        printf("Triangle Is Right");
    }

    return 0;
}
