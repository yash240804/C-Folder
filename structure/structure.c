#include <stdio.h>
struct student
{
    int rno;
    char name[50];
    int mobile;
} s1, s2, s3;

int main()
{
    printf("Enter the roll no. of each student\n");
    scanf("%d", &s1.rno);
    scanf("%d", &s2.rno);
    scanf("%d", &s3.rno);
    printf("Entered roll no. of each student is as follow : \n");
    printf("%d\n", s1.rno);
    printf("%d\n", s2.rno);
    printf("%d\n", s3.rno);
    printf("Enter the mobile no. of each student\n");
    scanf("%d", &s1.mobile);
    scanf("%d", &s2.mobile);
    scanf("%d", &s3.mobile);
    printf("Entered mobile no. of each student is as follow : \n");
    printf("%d\n", s1.mobile);
    printf("%d\n", s2.mobile);
    printf("%d\n", s3.mobile);
    printf("Enter the name of each student\n");
    scanf("%s", s1.name);
    scanf("%s", s2.name);
    scanf("%s", s3.name);
    printf("Entered name of each student is as follow : \n");
    printf("%s\n", s1.name);
    printf("%s\n", s2.name);
    printf("%s\n", s3.name);

    return 0;
}