#include <stdio.h>
int main()
{
    int n, a = 0, b = 0, c = 0;
    printf("Enter Size Of Array\n");
    scanf("%d", &n);
    printf("Enter The Element In Array\n");
    int k[n], k2[n], k3[n], k5[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &k[i]);
    }
    for (int i = 0; i < n; i++){
        if (k[i] % 2 == 0){
            k2[a] = k[i];
            a++;
        }
        if (k[i] % 3 == 0){
            k3[b] = k[i];
            b++;
        }
        if (k[i] % 5 == 0){
            k5[c] = k[i];
            c++;
        }
    }
    printf("The Nos. Divisible By 2\n");
    for (int i = 0; i < a; i++){
        printf("%d\n", k2[i]);
    }
    printf("The Nos. Divisible By 3\n");
    for (int i = 0; i < b; i++){
        printf("%d\n", k3[i]);
    }
    printf("The Nos. Divisible By 5\n");
    for (int i = 0; i < c; i++){
        printf("%d\n", k5[i]);
    }
    return 0;
}