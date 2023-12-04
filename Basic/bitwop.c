#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter The Number a, b\n");
    scanf("%d %d", &a, &b);

    printf("AND Of a, b Is %d\n", a & b);
    printf("OR Of a, b Is %d\n", a | b);
    printf("NOT Of a Is %d\n", ~a);
    printf("NOT Of b Is %d\n", ~b);
    printf("XOR Of a, b IS %d\n", a ^ b);
    printf("Left Shift Of a IS %d\n", a << 1);
    printf("Right Shift Of a IS %d\n", a >> 1);
    printf("Left Shift Of b IS %d\n", b << 1);
    printf("Right Shift Of b IS %d\n", b >> 1);
    return 0;
}