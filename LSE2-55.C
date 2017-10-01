//LSE2-55
//Function Recursion (Factorial)
#include<stdio.h>
#include<conio.h>
int fact(int n)
{	   if(n==1)
         return 1;
     else
         return n*fact(n-1);
}
void main()
{    int n;
     clrscr();
     printf("Enter a number: ");
     scanf("%d",&n);
     printf("%d!=%d",n,fact(n));
	    getch();
}