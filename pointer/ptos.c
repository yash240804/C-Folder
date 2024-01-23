#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{

    struct Point p1;

    p1.x = 10;
    p1.y = 20;

    struct Point *ptr = &p1;

    printf("Coordinates through pointer: (%d, %d)\n", ptr->x, ptr->y);

    ptr->x = 30;
    ptr->y = 40;

    printf("Modified coordinates through variable: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
