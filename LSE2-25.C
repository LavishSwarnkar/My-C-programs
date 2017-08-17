//LSE2-25
//Program to compare numbers using relational operators (II)
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter two numbers, a and b: ");
     scanf("%d %d",&a,&b);
     printf("\n(%d==%d) is ",a,b);
     a==b?printf("True"):printf("False");
     printf("\n(%d!=%d) is ",a,b);
     a!=b?printf("True"):printf("False");
     printf("\n(%d<%d) is ",a,b);
     a<b?printf("True"):printf("False");
     printf("\n(%d>%d) is ",a,b);
     a>b?printf("True"):printf("False");
     printf("\n(%d<=%d) is ",a,b);
     a<=b?printf("True"):printf("False");
     printf("\n(%d>=%d) is ",a,b);
     a>=b?printf("True"):printf("False");
     getch();
}