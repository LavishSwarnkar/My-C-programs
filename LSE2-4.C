/*Lavish Swarnkar E2*/
//Swapping using 3 variables
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{       int x,y,t;
	clrscr();
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	printf("\nX=%d and Y=%d",x,y);
	t=x;
	x=y;
	y=t;
	printf("\nAfter swapping, X=%d and Y=%d",x,y);
	getch();
}