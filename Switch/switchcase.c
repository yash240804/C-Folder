#include<stdio.h>
 #include<math.h>
 void add()
 {
    int a,b;
    printf("a+b enter values of a & b resp: ");
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d",a,b,a+b);
 }
 void sub()
 {
    int a,b;
    printf("a-b enter values of a & b resp: ");
    scanf("%d %d",&a,&b);
    printf("%d-%d=%d",a,b,a-b);
 }
 void pro()
 {
    int a,b;
    printf("a*b enter values of a & b resp: ");
    scanf("%d %d",&a,&b);
    printf("%d*%d=%d",a,b,a*b);
 }
 void div()
 {
    int a,b;
    printf("a/b enter values of a & b resp: ");
    scanf("%d %d",&a,&b);
    printf("%d/%d=%d",a,b,a/b);
 }
 void mod()
 {
    int a;
    printf("|a| enter value of a: ");
    scanf("%d",&a);
    if(a<0){printf("|a|= %d",-a);}
    else{printf("|a|= %d", a);}
 }
 void sq()
 {
    int a;
    printf("sq(a) enter value of a: ");
    scanf("%d",&a);
    printf("sq(%d)=%d",a,a*a);
 }
 void cb()
 {
    int a;
    printf("cb(a) enter value of a: ");
    scanf("%d",&a);
    printf("cb(%d)= %d",a,a*a*a);
 }
 void squarert()
 {
    double a;
    printf("sqrt(a) enter value of a: ");
    scanf("%lf",&a);
    printf("sqrt(%lf)= %lf",a,sqrt(a));
 }
 void cubert()
 {
    double a;
    printf("cbrt(a) enter value of a: ");
    scanf("%lf",&a);
    printf("cbrt(%lf)= %lf",a,cbrt(a));
 }
 int main()
 {
    int a,t;
    do
    {
        printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n6.square\n7.cube\n8.sqaure root\n9.cube root\n");
        scanf("%d", &a);
        switch(a)
        {
            case 1: add();
            break;
            case 2: sub();
            break;
            case 3: pro();
            break;
            case 4: div();
            break;
            case 5: mod();
            break;
            case 6: sq();
            break;
            case 7: cb();
            break;
            case 8: squarert();
            break;
            case 9: cubert();
            break;
            default: printf("invalid number!!!");
        }
        printf("\nContinue?\n[1=yes/0=no]\n");
        scanf("%d",&t);
    }while(t);
 }