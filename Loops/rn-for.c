#include <stdio.h>

int main()
{
    int num;
    printf("Enter No. For Reverse Print\n");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}