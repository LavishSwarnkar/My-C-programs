//LSE2-21
//Program to compare two numbers using if-else-if
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter two numbers, a and b : ");
     scanf("%d %d",&a,&b);
     if(a>b)
     {	printf("\na,i.e. ,%d is greater",a);
     }
     else if(b>a)
     {	printf("\nb,i.e. ,%d is greater",b);
     }
     else
     {	printf("\na and b are equal.");
     }
     getch();
}