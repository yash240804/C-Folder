#include <stdio.h>

int main()
{
    int i = 0, num;
    printf("Enter No. To Which You Want To Print\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < num);

    return 0;
}