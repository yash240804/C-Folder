#include <stdio.h>

int main()
{
    int n, sum, avg, k;
    printf("Enter Size Of Array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter The Values Of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The Value Of %d Element Is %d\n", i, a[i]);
    }
    printf("Enter The No. You Want In Array");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            printf("The Element %d Is In Array On %d Location\n", k, i);
        }
    }

    /*for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("The Sum Is %d\n", sum);
    avg = sum / n;
    printf("The Avg Is %d", avg);*/

    return 0;
}