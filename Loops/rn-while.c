#include <stdio.h>

int main()
{
    int num;
    printf("Enter The No. For Reverse Order\n");
    scanf("%d", &num);
    while (num > 0)
    {
        printf("%d\n", num);
        num--;
    }
    return 0;
}
