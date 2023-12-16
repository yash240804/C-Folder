#include <stdio.h>

int main()
{
    int a = 3;
    int *ptr = &a;
    printf("The Address of a is %x\n", &a);
    printf("The Address of a is %x\n", ptr);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", a);

    return 0;
}