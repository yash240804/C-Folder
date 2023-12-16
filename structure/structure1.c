#include <stdio.h>
struct student
{
    int rno;
    char name[50];
    int mobile;
} s1;
int main()
{
    scanf("%d", &s1.rno);
    scanf("%d", &s1.mobile);
    scanf("%s", s1.name);
    printf("%d\n", s1.rno);
    printf("%d\n", s1.mobile);
    printf("%s\n", s1.name);
    return 0;
}