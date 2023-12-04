#include <stdio.h>

int main()
{
    float a, b, c, d, e, t, p, g, v, percentage;
    printf("Enter Marks Of Subject a,b,c,d,e\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    t = a + b + c + d + e;
    printf("Total Is %f\n", t);
    v = t / 5;
    printf("Avg Is %f\n", v);
    p = t * 100 / 500;
    printf("Percentage Is %f\n", p);
    printf("Enter Your Percentage\n");
    scanf("%f", &percentage);

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
