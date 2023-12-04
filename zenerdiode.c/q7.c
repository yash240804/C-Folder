#include <stdio.h>
int swap(int a, int b);
int swap1(int b, int k);
int main()
{
    int a, b, k;
    
    printf("Enter Two No. For Swapping\n");
    scanf("%d %d", &a, &b);
    k = a;
    a = swap(a, b);
    b = swap1(b, k);

    printf("%d and %d", a, b);
    return 0;
}
int swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    return a;
}
int swap1(int b, int k)
{
    int t;
    t = b;
    b = k;
    return b;
}