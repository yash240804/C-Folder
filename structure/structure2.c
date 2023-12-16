#include <stdio.h>
struct student
{
    int rno;
    char name[50];
    int mobile;
} s1[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &s1[i].rno);
        scanf("%d", &s1[i].mobile);
        scanf("%s", s1[i].name);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", s1[i].mobile);
        printf("%d\n", s1[i].rno);
        printf("%s\n", s1[i].name);
    }

    return 0;
}