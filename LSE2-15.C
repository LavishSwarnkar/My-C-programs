//LSE2-15
//Program to calculate gross salary
#include<stdio.h>
#include<conio.h>
void main()
{    int g,b,d,t;
     clrscr();
     printf("Enter your salary: ");
     scanf("%d",&b);
     t=0.1*b;
     d=0.12*b;
     g=b+t+d;
     printf("\nYour Gross salary = %d",g);
     getch();
}