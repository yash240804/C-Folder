#include <stdio.h>

int main()
{
    int i = 0, num;
    printf("Enter No. To Which You Wnat To Print\n");
    scanf("%d", &num);

    while (i < num)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}