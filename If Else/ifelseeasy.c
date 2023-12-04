#include <stdio.h>

int main()
{
    int a;
    printf("Press\n 1. For Maths\n 2. For Science\n 3. For MathsAndScience\n");
    scanf("%d", &a);

    if (a==1)
    {
        printf("Claim Your Prize Worth 15Rs.");
    }
    else if (a==2)
    {
        printf("Claim Your Prize Worth 15Rs.");
    }
   else if (a==3)
   {
        printf("Claim Your Prize Worth 45Rs.");
   }
    
    
    return 0;
}
