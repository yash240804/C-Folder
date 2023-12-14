#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter The The value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    swap(&a, &b);
    printf("The value after swaping is : \n");
    printf("The value of a is %d and the value of b is %d", a, b);

    return 0;
}