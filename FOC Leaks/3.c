#include <stdio.h>

int main()
{
    int n, count=0;
    printf("Enter A No.\n");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    if (count == 4)
    {
        printf("No. Is Four Digit");
    }
    else
    {
        printf("No. Is Not Four Digit");
    }

    return 0;
}