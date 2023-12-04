#include <stdio.h>
int main()
{// Note : The Order Of Both Array Should Be Same As This Is Condition For Matrix Addition....
    int n, m, x, y;
    printf("Enter Order Of First Matrix\n");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter Order Of Second Matrix\n");
    scanf("%d %d", &x, &y);
    int b[x][y];
    int c[x][y];
    if (x == y && n == m && n == x){
        printf("Enter Element In First Matrix\n");
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter Element In Second Matrix\n");
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                scanf("%d", &b[i][j]);
            }
        }
        printf("The Addition Of Two Matrix\n");
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                c[i][j] = a[i][j] + b[i][j];
                printf("%d\n", c[i][j]);
            }
        }
    }
    else{
        printf("The Order Of Matrix Is Not Same So Addition Is Not Possible\n");
    }
    return 0;
}