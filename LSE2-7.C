/*Lavish Swarnkar E2*/
//Heron's Formula
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{       float s,a,b,c,area;
	clrscr();
	printf("Enter sides of triange: ");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nArea of triangle with sides %f, %f and %f units is %f square units",a,b,c,area);
	getch();
}