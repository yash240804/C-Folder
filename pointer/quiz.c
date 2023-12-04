#include <stdio.h>
void update(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    if (temp > *b)
    {
        *b = temp - *b;
    }
    else
    {
        *b = *b - temp;
    }
}

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    update(&i, &j);
    printf("%d\n%d", i, j);
    return 0;
}