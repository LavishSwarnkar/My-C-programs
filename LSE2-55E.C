//LSE2-55-Extra
//Function Recursion (Factorial)
#include<stdio.h>
#include<conio.h>
int n;
int fact(int i)
{	   if(i==n)
         return n;
     else
         return i*fact(i+1);
}
void main()
{    clrscr();
     printf("Enter a number: ");
     scanf("%d",&n);
     printf("%d!=%d",n,fact(1));
	    getch();
}