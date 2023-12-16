#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter The Value Of a, b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);

    return 0;
}