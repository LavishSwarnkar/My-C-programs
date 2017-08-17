//LSE2-26
//Using Logical operators
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter two numbers, a and b: ");
     scanf("%d %d",&a,&b);
     printf("\n(%d>=%d)&&(%d==%d) is ",a,b,a,b);
     (a>=b)&&(a==b)?printf("True"):printf("False");

     printf("\n(%d>=%d)||(%d==%d) is ",a,b,a,b);
     (a>=b)||(a==b)?printf("True"):printf("False");

     printf("\n(%d<=%d)&&(%d==%d) is ",a,b,a,b);
     (a<=b)&&(a==b)?printf("True"):printf("False");

     printf("\n!(%d==%d) is ",a,b,a,b);
     !(a==b)?printf("True"):printf("False");

     getch();
}