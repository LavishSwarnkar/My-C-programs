//LSE2-28
//Using Logical operators
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter two numbers, a and b: ");
     scanf("%d %d",&a,&b);
     printf("\n%d&&%d = %d ",a,b,a&&b);
     printf("\n%d||%d = %d ",a,b,a||b);
     printf("\n!%d = %d ",a,!a);
     printf("\n!%d = %d ",b,!b);
     getch();
}