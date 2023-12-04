#include <stdio.h>
int Star_pattern()
{
    int a;
    printf("Enter how many stars(*) you want : \n");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    return 0;
}

int main()
{
    Star_pattern();
    return 0;
}
