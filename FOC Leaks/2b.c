#include <stdio.h>

int main()
{
    float price, d, f;
    printf("Enter Price Of Laptop\n");
    scanf("%f", &price);
    d = price - (price * 0.12);
    printf("Discount Price %.2f\n", d);
    f = d + (d * 0.08);
    printf("Final Price To Be Paid %.2f", f);
    return 0;
}