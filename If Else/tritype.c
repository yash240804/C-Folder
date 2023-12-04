#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Sides Of Triangles\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Triangle Is Equilateral");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Triangle Is Isoceles");
    }
    else
    {
        printf("Triangle Is Scalene");
    }

    return 0;
}
