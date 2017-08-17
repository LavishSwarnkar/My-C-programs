//LSE2-24
//Program to compare numbers using relational operators (I)
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter two numbers, a and b: ");
     scanf("%d %d",&a,&b);
     printf("\n(%d==%d)=%d",a,b,a==b);
     printf("\n(%d!=%d)=%d",a,b,a!=b);
     printf("\n(%d<%d)=%d",a,b,a<b);
     printf("\n(%d>%d)=%d",a,b,a>b);
     printf("\n(%d<=%d)=%d",a,b,a<=b);
     printf("\n(%d>=%d)=%d",a,b,a>=b);
     getch();
}