//LSE2-22
//Program to check whether a number is positive or negative using if-else-if
#include<stdio.h>
#include<conio.h>
void main()
{    int a;
     clrscr();
     printf("Enter a number: ");
     scanf("%d",&a);
     if(a>0)
     {	printf("\n%d is a positive number",a);
     }
     else if(a<0)
     {	printf("\n%d is a negative number",a);
     }
     else
     {	printf("\nNumber is equal to 0");
     }
     getch();
}