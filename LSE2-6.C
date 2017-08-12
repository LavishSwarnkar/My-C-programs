/*Lavish Swarnkar E2*/
//area of circle
#include<conio.h>
#include<stdio.h>
void main()
{       float rad,area;
	clrscr();
	printf("Enter Radius of circle: ");
	scanf("%f",&rad);
	area=(3.14)*rad*rad;
	printf("\nArea of circle having radius %f units is %f square units",rad,area);
	getch();
}