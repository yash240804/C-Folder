#include <stdio.h>
struct student
{
    int rno;
    char name[50];
    int mobile;
} s1[10];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter roll no. of student no. %d\n", (i + 1));
        scanf("%d", &s1[i].rno);
        printf("Enter Mobile no. of student no. %d\n", (i + 1));
        scanf("%d", &s1[i].mobile);
        printf("Enter name of student no. %d\n", (i + 1));
        scanf("%s", s1[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The roll no. of student no. %d\n", (i + 1));
        printf("%d\n", s1[i].rno);
        printf("The Mobile no. of student no. %d\n", (i + 1));
        printf("%d\n", s1[i].mobile);
        printf("The name of student no. %d\n", (i + 1));
        printf("%s\n", s1[i].name);
    }

    return 0;
}