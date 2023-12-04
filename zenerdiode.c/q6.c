#include <stdio.h>
float area(float r)
{
    float c = r * r;
    return (3.14 * c);
}
int main()
{
    float r;
    printf("Enter radius of circle\n");
    scanf("%f", &r);
    printf("Area Of Circle Is %f", area(r));

    return 0;
}