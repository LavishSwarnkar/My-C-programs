//LSE2-23
//Program to check whether a number is even or odd using if-else
#include<stdio.h>
#include<conio.h>
void main()
{    int a;
     clrscr();
     printf("Enter a number: ");
     scanf("%d",&a);
     if(a%2==0)
     {	printf("\n%d is a even number",a);
     }
     else
     {	printf("\n%d is a odd number",a);
     }
     getch();
}