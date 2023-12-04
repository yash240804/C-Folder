#include <stdio.h>

int main()
{
    int a, b=2;
    printf("Enter The No a\n");
    scanf("%d" , &a);
    if (a%b==0)
    {
    printf("%d is even\n" , a);
    }
    else 
    {
    printf("%d is odd\n" , a );    
    }
    return 0;
}
