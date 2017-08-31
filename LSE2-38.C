//LSE2-38
//Using While Loop (Factorial Calculator)
#include<stdio.h>
#include<conio.h>
void main()
{    unsigned long num,n,fact=1;
     clrscr();
     printf("Enter a number to evaluate its Factorial: ");
     scanf("%ld",&num);
     n=num;
     while(num>0)
     {	fact*=num;
	--num;
     }
     printf("Factorial of %ld is %ld",n,fact);
     getch();
}
