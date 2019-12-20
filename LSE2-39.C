//LSE2-39
//Leap year check
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{    int year;
     clrscr();
     printf("Enter year: ");
     scanf("%d",&year);
     if((year%400==0)||(year%100!=0&&year%4==0))
	printf("The year %d is a leap year",year);
     else
	printf("The year %d is not a leap year",year);
     getch();
}
