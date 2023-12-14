#include <stdio.h>

int main()
{
    int a;
    int *ptr = &a;
    printf("Enter the no.\n");
    scanf("%d", &a);
    printf("The value of a is %d\n", a);
    printf("The value of a(by pointer) is %d\n", *ptr);
    printf("Address of a(by pointer) is : %p\n", ptr);
    printf("Address of a is : %p\n", &a);

    return 0;
}