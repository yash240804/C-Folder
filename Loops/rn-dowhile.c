#include <stdio.h>

int main()
{
    int num;
    printf("Enter No. You Want To Reverse Print Too\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", num);
        num--;
    } while (num > 0);
    return 0;
}