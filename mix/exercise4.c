#include <stdio.h>

int main()
{
    int n;
    char choice;
    printf("Enter No. Of Rows You Want In Star Pattern\n");
    scanf("%d", &n);

    while (1)
    {
        printf("Press q.To Quit\n 1.To Print Triangular Pattern\n 2.To Print Reverse Triangular Pattern\n");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'q':
            goto end;
            break;

        case '1':
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case '2':
            for (int i = n; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
    }
end:
    return 0;
}