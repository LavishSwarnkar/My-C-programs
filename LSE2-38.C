//LSE2-38
//Using While Loop (Factorial Calculator)
#include<stdio.h>
#include<conio.h>
void main()
{    int num,n,fact=1;
     clrscr();
     printf("Enter a number to evaluate its Factorial: ");
     scanf("%d",&num);
     n=num;
     while(num>0)
     {	fact*=num;
	--num;
     }
     printf("Factorial of %d is %d",n,fact);
     getch();
}