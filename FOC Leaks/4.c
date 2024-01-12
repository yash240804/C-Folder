#include <stdio.h>

int main()
{
    int n, sumeven = 0, sumodd = 0;
    printf("Enter The No. Till You Want Sum Of Even And Odd No.\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumeven += i;
        }
        else
        {
            sumodd += i;
        }
    }
    printf("%d\n", sumeven);
    printf("%d", sumodd);

    return 0;
}